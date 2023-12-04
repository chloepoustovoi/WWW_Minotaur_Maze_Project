#include <Servo.h>

// create servos
// 2 - 7

// door by Ariadne
Servo servoAriDoor;
// door by Minotaur
Servo servoMinoDoor;
// Minotaur servo
Servo servoMinotaur;

// create switches
// 2 switch near Ariadne
 int switchAri = 2;
// 4 switch to open Minotaur door
 int switchMino = 4;
// 3 Minotaur
 int Minotaur = 3;

void setup() {

  Serial.begin(9600);
  
// setup servos
  servoAriDoor.attach(9);
  servoMinoDoor.attach(10);
  servoMinotaur.attach(8);

// setup switches
  pinMode(switchAri, INPUT);
  pinMode(switchMino, INPUT);
  pinMode(Minotaur, INPUT);
}

void loop() {
  Serial.println(digitalRead(Minotaur));
// if ariadne switch, ariadne door & sword door 180
  if (digitalRead(switchAri) == HIGH) {
    servoAriDoor.write(180);
  }

// if minotaur door switch, minotaur door 180
  if (digitalRead(switchMino) == HIGH) {
    servoMinoDoor.write(180);
  }

// if minotaur switch, minotaur 180
  if (digitalRead(Minotaur) == HIGH) {
    servoMinotaur.write(180);
  }
}
