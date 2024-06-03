import 'package:dart_openai/dart_openai.dart';


Future<bool> analyzeSentiment(String response) async {
  final sentimentAnalysis = await OpenAI.instance.completion.create(
    model: 'gpt-3.5-turbo-instruct',
    prompt: """
    あなたは文章の感情分析を行うモデルです。以下のレスポンスがポジティブかネガティブかを判定してください。
    判定の基準は次の通りです：
    - ポジティブ：文章が肯定的、楽観的、または満足を示している場合。例：「この製品は素晴らしいです」、「今日は本当に楽しかったです」
    - ネガティブ：文章が否定的、悲観的、または不満を示している場合。例：「この製品はひどいです」、「今日はとても疲れました」

    判定結果を次の形式で出力してください：
    - ポジティブの場合：'true'
    - ネガティブの場合：'false'

    必ず'true'または'false'のいずれかを返してください。その他の回答は不要です。

    レスポンス: $response
    """,
    maxTokens: 5, // 少し多めに設定して、より明確な応答を得る
    temperature: 0.3, // 多様性を持たせるために若干上げる
  );
  final sentiment = sentimentAnalysis.choices.first.text.trim().toLowerCase() == 'true';
  return sentiment;
}
