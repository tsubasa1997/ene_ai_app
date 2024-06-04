# ene_ai_app
 
このアプリは画面の中のキャラクターAIとコミュニケーションを取ることができるアプリです。


https://github.com/tsubasa1997/ene_ai_app/assets/96885280/5e95af63-55a4-4fe3-ae90-9116d429ed20



### アプリ内のキャラクターはカゲロウプロジェクトに登場するエネというキャラクターを元に、VRoid Studioを使用して3Dモデルを作成しました.


VRoid URL https://vroid.com/studio
<img width="1021" alt="スクリーンショット 2024-06-04 8 46 49" src="https://github.com/tsubasa1997/ene_ai_app/assets/96885280/1a7970a8-dd44-4fc9-b55a-58b478654af1">


# 使用技術
* Flutter
* Unity
* Open API
* flutter unity widget  https://pub.dev/packages/flutter_unity_widget
* 音声生成ツール

# 設計概要
このアプリの大きな特徴はOpen APIを活用している点です。
生成AIを使ったキャラクターへの問いかけに対する返答文の生成はもちろんのこと、その生成されたテキストを元に感情も推定し、発声と3Dモデルへのモーションの命令を行なっています。
このように、生成AI・音声生成等の各種外部APIとのやりとりやUnity Libraryを用いての3Dの表現を、Flutterを用いて1つのアプリとして統合しています。

システムの全体的な図は下のようになっています。

<img width="741" alt="スクリーンショット 2024-06-04 11 48 21" src="https://github.com/tsubasa1997/ene_ai_app/assets/96885280/d03eeeb1-e94d-490f-b978-29a3bb43e173">

# 開発概要
このアプリは大きく分けて,4つの機能を用いてテキストコミニケーションを取れるようになっています。
### 1.入力フォーム
### 2.AIからの返答
### 3.3Dモデルのアクション
### 4.返答の音声化

![スクリーンショット 2024-06-04 8 29 34](https://github.com/tsubasa1997/ene_ai_app/assets/96885280/309ccdd1-fdf0-48f1-bb5a-61ec94dc76a7)

## 1.入力フォーム
現在はテキスト入力のみ対応しており、将来的にはOpenAI APIのWhisperを利用した音声入力の実装も考えております。

OpenAI APIのWhisperのURL => https://platform.openai.com/docs/guides/speech-to-text

## 2.AIからの返答
AIの返答の生成にはChatGPT（gpt-3.5-turbo）を利用しています。
ChatGPTへの入力は『性格設定』『現在の入力』で構成しています。

### 性格設定
性格設定はカゲロウプロジェクトのエネのキャラを表現してくれるように作成しました。
<img width="689" alt="スクリーンショット 2024-06-04 8 59 53" src="https://github.com/tsubasa1997/ene_ai_app/assets/96885280/1177f47a-cd66-4d9e-a9ac-54196f362aec">

## 3.3Dモデルのアクション

### 1.生成されたテキストを読み取り、感情表現を分析
3Dモデルをこのアプリで使おうとした目的の一つとして、AIの返答を視覚的に表現したいという考えで採用しました。  
最終的なゴールは生成されたテキストを読み取って、『喜怒哀楽』を表現化することであり、今回は試作ということで
生成されたテキストの内容が『ポジティブ』か『ネガティブ』かの2択で判別するようにしました。

判別方法は最初に受け取ったAIからの返答を再度条件を要求して『ポジティブ』か『ネガティブ』か判定してもらって出力してもらうようにしています。

<img width="1077" alt="スクリーンショット 2024-06-04 9 18 27" src="https://github.com/tsubasa1997/ene_ai_app/assets/96885280/0784bada-f1af-4f15-96e4-6114ee57b0c0">

### 2.判別結果をUnityへPost
flutterパッケージのflutter_unity_widgetのメソッドunityWidgetController.postMessageを使って
Unity側の3Dオブジェクト、起動させたいメソッド名、送信するメッセージ（ここでは感情分析の結果）をUnityの指定されたGameObjectにメッセージとして送信しています。

#### Flutter側
<img width="848" alt="スクリーンショット 2024-06-04 9 27 56" src="https://github.com/tsubasa1997/ene_ai_app/assets/96885280/12bf37db-5881-4630-bb6e-6d3d5399abb2">

#### Unity側
<img width="1035" alt="スクリーンショット 2024-06-04 9 32 48" src="https://github.com/tsubasa1997/ene_ai_app/assets/96885280/651e163e-8b3c-4945-8087-08c0e1875e70">

#### C#スクリプト
<img width="1007" alt="スクリーンショット 2024-06-04 9 35 29" src="https://github.com/tsubasa1997/ene_ai_app/assets/96885280/5dc7caa6-7d81-47f3-9bd1-0ea404c0353b">

### 3.Triggerを使って3Dオブジェクトに特定の動作を命令
受け取った指令をTriggerとして3DオブジェクトのAnimetionControllerで動かしたいアニメーションに遷移させます。

<img width="1090" alt="スクリーンショット 2024-06-04 9 41 36" src="https://github.com/tsubasa1997/ene_ai_app/assets/96885280/b02db370-9024-4804-9e98-3289ccde3d99">
     

### UnityWidgetController.postMessageとTriggerを組み合わせればボタンによるセットされた好きなアニメーションを呼ぶことができ、好きなタイミングでアニメーションを見ることがわかりますね。

#### ボタンによるアニメーション操作
https://github.com/tsubasa1997/ene_ai_app/assets/96885280/92afed55-9a4d-4dff-9ef1-d32a30cc539b










