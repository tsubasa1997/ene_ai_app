import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:flutter_unity_widget_example/controller/chat_controller/chat_controller.dart';

class BottomWidget extends ConsumerStatefulWidget {
  const BottomWidget({super.key, this.unityWidgetController});

  final UnityWidgetController? unityWidgetController;

  @override
  ConsumerState<BottomWidget> createState() => _BottomWidgetState();
}

class _BottomWidgetState extends ConsumerState<BottomWidget> {
  final TextEditingController messageController = TextEditingController();

  @override
  Widget build(BuildContext context) {
    return Card(
      color: Colors.black.withOpacity(0.8),
      elevation: 20,
      margin: const EdgeInsets.all(8.0),
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(15.0),
        side: BorderSide(color: Colors.cyanAccent, width: 2),
      ),
      child: Padding(
        padding: const EdgeInsets.all(10.0),
        child: Row(
          children: [
            Expanded(
              child: Container(
                padding: const EdgeInsets.symmetric(horizontal: 14),
                decoration: BoxDecoration(
                  gradient: LinearGradient(
                    colors: [Colors.black, Colors.blueGrey.shade900],
                    begin: Alignment.topLeft,
                    end: Alignment.bottomRight,
                  ),
                  borderRadius: BorderRadius.circular(40),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.blueAccent.withOpacity(0.5),
                      spreadRadius: 2,
                      blurRadius: 5,
                      offset: Offset(0, 3),
                    ),
                  ],
                ),
                child: TextField(
                  controller: messageController,
                  style: TextStyle(color: Colors.cyanAccent),
                  autofocus: true,
                  decoration: const InputDecoration(
                    hintText: 'エネと会話しましょう!!',
                    hintStyle: TextStyle(color: Colors.cyanAccent),
                    border: InputBorder.none,
                  ),
                  onSubmitted: (_) => _closeKeyboard(),
                ),
              ),
            ),
            IconButton(
              onPressed: () async {
                if (widget.unityWidgetController != null) {
                  try {
                    _closeKeyboard();
                    await ref.read(chatStateProvider.notifier).sendMessage(messageController.text, widget.unityWidgetController!);
                    messageController.clear();
                  } catch (e) {
                    print('Error in IconButton onPressed: $e');
                  }
                } else {
                  print("UnityWidgetController is null");
                }
              },
              icon: const Icon(Icons.send),
              color: Colors.cyanAccent,
            ),
          ],
        ),
      ),
    );
  }

  void _closeKeyboard() {
    FocusScope.of(context).unfocus();
  }
}


