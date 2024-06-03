import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:flutter_unity_widget_example/controller/chat_controller/chat_controller.dart';
import 'package:flutter_unity_widget_example/ui/home/widgets/action_button.dart';

import 'package:flutter_unity_widget_example/ui/home/widgets/bottom_widget.dart';
import 'package:flutter_unity_widget_example/ui/home/widgets/chat_widget.dart';

class HomeScreen extends ConsumerStatefulWidget {
  const HomeScreen({
    super.key,
    required this.onBuild,
  });

  final Future<void> onBuild;

  @override
  ConsumerState<HomeScreen> createState() => _HomeScreenState();
}

class _HomeScreenState extends ConsumerState<HomeScreen> {
  static final GlobalKey<ScaffoldState> _scaffoldKey =
  GlobalKey<ScaffoldState>();
  UnityWidgetController? _unityWidgetController;

  @override
  void initState() {
    super.initState();
  }


  @override
  Widget build(BuildContext context) {
    final chatState = ref.watch(chatStateProvider);
    final messageListState = chatState.messages;

    return  Scaffold(
        key: _scaffoldKey,
        body: Card(
          margin: const EdgeInsets.all(0),
          clipBehavior: Clip.antiAlias,
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(20.0),
          ),
          child: Stack(
            children: [
              UnityWidget(
                onUnityCreated: _onUnityCreated,
                useAndroidViewSurface: false,
                borderRadius: const BorderRadius.all(Radius.circular(70)),
              ),
              Positioned(
                top: 40,
                left: 0,
                right: 0,
                child: ChatWidget(stateMessage: messageListState.last),
              ),
              Positioned(
                bottom: 100,
                left: 20,
                child: ActionButton(buttonName: 'モーションA', motion: 'MotionA', unityWidgetController: _unityWidgetController,),
              ),
              Positioned(
                bottom: 100,
                right: 20,
                child: ActionButton(buttonName: 'モーションB', motion: 'MotionB', unityWidgetController: _unityWidgetController,),
              ),
              Positioned(
                bottom: 10,
                left: 0,
                right: 0,
                child: BottomWidget(unityWidgetController: _unityWidgetController),
              ),
            ],
          ),
        ),

    );
  }


  void _onUnityCreated(UnityWidgetController controller) {
    controller.resume();
    setState(() {
      _unityWidgetController = controller;
    });
  }
}
