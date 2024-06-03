import 'dart:async';

import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:flutter_unity_widget_example/controller/chat_controller/chat_controller.dart';
import 'package:flutter_unity_widget_example/ui/home/home_screen.dart';


class StartScreen extends ConsumerStatefulWidget {
  const StartScreen({super.key});

  @override
  ConsumerState<StartScreen> createState() => _StartScreenState();
}

class _StartScreenState extends ConsumerState<StartScreen> {

  UnityWidgetController? _unityWidgetController;

  @override
  void initState() {
    super.initState();
    // 6秒後に次の画面に遷移する
    Timer(Duration(seconds: 5), () {
      Navigator.of(context).pushReplacement(
        MaterialPageRoute(builder: (context){
          return HomeScreen(
            onBuild: Future((){
              ref.read(chatStateProvider.notifier).firstContact();
            })
          );
        }),
      );
    });
  }

  @override
  void dispose() {
    _unityWidgetController?.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          Offstage(
            offstage: true,
            child: UnityWidget(
              onUnityCreated: _onUnityCreated,
              useAndroidViewSurface: false,
              borderRadius: const BorderRadius.all(Radius.circular(70)),
            ),
          ),
          // 中心にテキストを表示
          Center(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.center,
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Image.asset("assets/images/ene_icon.png"),
                Text('Loading, please wait...'),
              ],
            ),
          ),
        ],
      ),
    );
  }

  void _onUnityCreated(controller) {
    controller.resume();
    _unityWidgetController = controller;
  }

}
