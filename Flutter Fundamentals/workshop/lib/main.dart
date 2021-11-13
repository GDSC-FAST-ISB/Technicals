import 'package:flutter/material.dart';
import 'dart:math';

void main() {
  runApp(HomeScreen());
}

class HomeScreen extends StatefulWidget {
  @override
  State<HomeScreen> createState() => _HomeScreenState();
}

class _HomeScreenState extends State<HomeScreen> {
  String curImage = 'images/ball0.png';

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.blue,
        appBar: AppBar(
          title: const Text(
            "ASK ME ANYTHING",
            style: TextStyle(
              fontWeight: FontWeight.bold,
            ),
          ),
          centerTitle: true,
          backgroundColor: Colors.blueAccent,
        ),
        body: GestureDetector(
            onTap: () {
              setState(() {
                curImage =
                    'images/ball' + Random().nextInt(5).toString() + '.png';
              });
            },
            child: Center(
              child: Image.asset(curImage),
            )),
      ),
    );
  }
}
