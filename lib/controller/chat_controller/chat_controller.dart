import 'package:dart_openai/dart_openai.dart';
import 'package:flutter/foundation.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:flutter_unity_widget_example/controller/unity_controller/unity_controller.dart';
import 'package:flutter_unity_widget_example/controller/voice_controller/voice_controller.dart';
import 'package:flutter_unity_widget_example/open_api/personality_settings.dart';
import 'package:flutter_unity_widget_example/open_api/sentiment_analysis.dart';
import 'package:freezed_annotation/freezed_annotation.dart';

part 'chat_controller.freezed.dart';


@freezed
class ChatState with _$ChatState {
  const factory ChatState({
    @Default(<OpenAIChatCompletionChoiceMessageModel>[]) List<OpenAIChatCompletionChoiceMessageModel> messages,
  }) = _ChatState;
}

final chatStateProvider = StateNotifierProvider.autoDispose<ChatStateNotifier, ChatState>(
      (read) => ChatStateNotifier(ref: read),
);

class ChatStateNotifier extends StateNotifier<ChatState> {
  ChatStateNotifier({required this.ref}) : super(const ChatState());

  final Ref ref;

  Future<void> firstContact() async {
    String firstContent = 'こんにちはご主人！！！！何かご用ですか？ 今日は天気がとてもいいですね！！';

    final newUserMessage = OpenAIChatCompletionChoiceMessageModel(
      content: [
        OpenAIChatCompletionChoiceMessageContentItemModel.text(firstContent),
      ],
      role: OpenAIChatMessageRole.assistant,
    );

    final messages = [...state.messages];
    messages.add(newUserMessage);
    state = state.copyWith(messages: messages);

    await ref.read(voiceProvider).localAudio();
  }


  Future<void> sendMessage(String message, UnityWidgetController unityWidgetController) async {
    const retryDelay = Duration(seconds: 60);
    const maxRetries = 3;
    int retries = 0;

    final systemMessage = getEnePersonality();

    while (retries < maxRetries) {
      try {
        final newUserMessage = OpenAIChatCompletionChoiceMessageModel(
          content: [
            OpenAIChatCompletionChoiceMessageContentItemModel.text(message),
          ],
          role: OpenAIChatMessageRole.user,
        );

        final messages = [...state.messages, systemMessage];
        messages.add(newUserMessage);
        state = state.copyWith(messages: messages);

        final chatCompletion = await OpenAI.instance.chat.create(
          model: 'gpt-3.5-turbo',
          messages: messages,
        );

        final ans = chatCompletion.choices.first.message;
        final content = ans.content!.map((item) => item.text).join();
        final answerMessage = OpenAIChatCompletionChoiceMessageModel(
          content: [
            OpenAIChatCompletionChoiceMessageContentItemModel.text(content),
          ],
          role: OpenAIChatMessageRole.assistant,
        );

        messages.add(answerMessage);
        state = state.copyWith(messages: messages);


        final isPositive = await analyzeSentiment(content);
        print('Sentiment Analysis Result: $isPositive');

        await ref.read(voiceProvider).highSpeedApi(content);
        await ref.read(unityProvider).sendSentimentResult(isPositive, unityWidgetController);


        break;
      } on RequestFailedException catch (e) {
        if (e.statusCode == 429) {
          print('Error: ${e.message}. Retrying in 60 seconds...');
          await Future.delayed(retryDelay);
          retries++;
        } else {
          print('Error: ${e.message}');
          break;
        }
      }
    }

    if (retries == maxRetries) {
      print('Max retries reached. Please check your plan and billing details.');
    }
  }



}