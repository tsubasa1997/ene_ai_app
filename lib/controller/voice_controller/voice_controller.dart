import 'package:assets_audio_player/assets_audio_player.dart';
import 'package:flutter_dotenv/flutter_dotenv.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:http/http.dart' as http;
import 'package:just_audio/just_audio.dart';
import 'dart:io';

import 'package:path_provider/path_provider.dart';

final voiceProvider = Provider(
  (ref) => voiceController(ref: ref),
);

class voiceController {
  const voiceController({required this.ref});

  final Ref ref;

  Future<void> localAudio() async {
    AssetsAudioPlayer.newPlayer().open(
      Audio('assets/audio/ene_local.mp3'),
      showNotification: true,
    );
  }

  Future<void> highSpeedApi(String content) async {
    try {
      await dotenv.load(fileName: ".env");
      String voiceApi = dotenv.env['VOICE_APIKEY']!;
      String textUrl = 'https://deprecatedapis.tts.quest/v2/voicevox/audio/?text=$content&key=$voiceApi&speaker=54';
      final url = Uri.parse(textUrl);
      final response = await http.get(url);


      if (response.statusCode != 200) {
        throw Exception('Something occurred.');
      }

      final dir = await getTemporaryDirectory();
      final file = File('${dir.path}/voice.wav');
      await file.writeAsBytes(response.bodyBytes);

      String wavUrl = file.path;
      final player = AudioPlayer();
      await player.setFilePath(wavUrl);
      await player.play();
    } catch (e) {
      print('Error in highSpeedApi: $e');
      throw Exception('Failed to execute highSpeedApi');
    }
  }
}
