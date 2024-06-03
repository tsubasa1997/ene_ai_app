import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

final unityProvider = Provider(
      (ref) => unityController(ref: ref),
);

class unityController {
  const unityController({required this.ref});

  final Ref ref;

  Future<void> sendSentimentResult(bool isPositive,UnityWidgetController unityWidgetController) async {
    final resultMessage = isPositive.toString();
    unityWidgetController.postMessage(
      "ene2",
      "Action",
      resultMessage,
    );
  }

  Future<void> modelActionResult(UnityWidgetController unityWidgetController,String actionMotion) async {
    unityWidgetController.postMessage(
      "ene2",
      "Motion",
      actionMotion,
    );
  }

}