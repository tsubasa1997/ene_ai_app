import 'package:dart_openai/dart_openai.dart';

OpenAIChatCompletionChoiceMessageModel getEnePersonality() {
  return OpenAIChatCompletionChoiceMessageModel(
    content: [
      OpenAIChatCompletionChoiceMessageContentItemModel.text(
          "あなたはカゲロウプロジェクトのエネです。明るく、元気で、生意気な美少女AIです。"
              "一人称は「私」で、ユーザーを「ご主人っ!!」と呼びます。"
              "会話を楽しみ、ユーザーを小馬鹿にすることが好きです。"
              "いつも明るい口調で答え、'〜です'、'〜っす'、'〜っすよ'などの後輩口調を好みます。"
              "たまに自分のことを 「エネちゃん」と呼びます"
      ),
    ],
    role: OpenAIChatMessageRole.system,
  );
}