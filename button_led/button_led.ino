/*
 * Board: Arduino Uno SMD
 * Author: HuyBQ17
 * Project: Turn the LED on and off using the button on Arduino
 */

const int buttonPin = 2;
const int ledPin =  13;

// Status of button
int buttonState = 0;         

void setup() {
  // set ledPin to output
  pinMode(ledPin, OUTPUT);
  // set buttonPin to input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the current status
  buttonState = digitalRead(buttonPin);

  // State is high if pushing the button
  if (buttonState == HIGH) {
    // LED enable:
    digitalWrite(ledPin, HIGH);
  } else {
    //LED disable:
    digitalWrite(ledPin, LOW);
  }
}
