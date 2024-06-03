import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:flutter_unity_widget_example/controller/unity_controller/unity_controller.dart';

class ActionButton extends ConsumerStatefulWidget {
  const ActionButton({
    super.key,
    required this.buttonName,
    required this.motion,
    required this.unityWidgetController,
  });

  final String buttonName;
  final String motion;
  final UnityWidgetController? unityWidgetController;

  @override
  _ActionButtonState createState() => _ActionButtonState();
}

class _ActionButtonState extends ConsumerState<ActionButton> {
  bool _isTapped = false;

  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTapDown: (_) {
        setState(() {
          _isTapped = true;
        });
      },
      onTapUp: (_) {
        setState(() {
          _isTapped = false;
        });
      },
      onTap: () async {
        await ref.read(unityProvider).modelActionResult(
              widget.unityWidgetController!,
              widget.motion,
            );
        setState(() {
          _isTapped = false;
        });
      },
      child: AnimatedContainer(
        duration: Duration(milliseconds: 200),
        decoration: BoxDecoration(
          color: Colors.black,
          border: Border.all(
            color: _isTapped ? Colors.redAccent : Colors.cyanAccent,
            width: 3.0,
          ),
          borderRadius: BorderRadius.circular(15.0),
          boxShadow: [
            BoxShadow(
              color: Colors.cyanAccent.withOpacity(0.5),
              spreadRadius: 2,
              blurRadius: 5,
              offset: Offset(0, 3),
            ),
          ],
          gradient: LinearGradient(
            colors: [Colors.black, Colors.blueGrey.shade900],
            begin: Alignment.topLeft,
            end: Alignment.bottomRight,
          ),
        ),
        padding: EdgeInsets.symmetric(horizontal: 24, vertical: 12),
        child: Text(
          widget.buttonName,
          style: TextStyle(
            color: Colors.cyanAccent,
            fontSize: 18,
            fontWeight: FontWeight.bold,
            letterSpacing: 1.5,
          ),
        ),
      ),
    );
  }
}
