#include <Keyboard.h>


void setup() {
  
Keyboard.begin();

//Joystick and button connections
pinMode(2, INPUT_PULLUP); //Joystick Up Switch
pinMode(3, INPUT_PULLUP); //Joystick Left Switch
pinMode(4, INPUT_PULLUP); //Joystick Down Switch
pinMode(5, INPUT_PULLUP); //Joystick Right Switch
pinMode(6, INPUT_PULLUP); //Left Fire Button
pinMode(7, INPUT_PULLUP); //Right Fire Button

digitalWrite(5, HIGH);
}

void loop() {

digitalWrite(5, HIGH);

// Check the switches:
int buttonUp = digitalRead(4);
int buttonLeft = digitalRead(3);
int buttonDown = digitalRead(2);
int buttonRight = digitalRead(5);
int buttonLeftFire = digitalRead(7);
int buttonRightFire = digitalRead(6);

// Joystick Up =  Key w
if (buttonUp == LOW) {
Keyboard.press('w');
}
else {
Keyboard.release('w');
}

// Joystick Left =  Key a
if (buttonLeft == LOW) {
Keyboard.press('a');
}
else {
Keyboard.release('a');
}

// Joystick Down =  Key s
if (buttonDown == LOW) {
Keyboard.press('s');
}
else {
Keyboard.release('s');
}

// Joystick Right =  Key d
if (buttonRight == LOW) {
Keyboard.press('d');
}
else {
Keyboard.release('d');
}

// Joystick Left fire =  Key X
if (buttonLeftFire == LOW) {
Keyboard.write(' ');
delay(200);
}
else {
Keyboard.release(' ');
}

// Joystick Rigth fire =  Key Y
if (buttonRightFire == LOW) {
Keyboard.write('e');
delay(100);
}
else {
Keyboard.release(' ');
}

}
