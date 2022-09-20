// C++ code
//
/*
  Keyboard

  Plays a pitch that changes based on a changing
  input circuit:
  * 3 pushbuttons from +5V to analog in 0 through
  3
  * 3 10K resistors from analog in 0 through 3 to
  ground
  * 8-ohm speaker on digital pin 8
*/

int pos = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
}

void loop()
{
  // if button press on A0 is detected
  if (digitalRead(A0) == HIGH) {
    tone(8, 440, 100); // play tone 57 (A4 = 440 Hz)
  }
  // if button press on A1 is detected
  if (digitalRead(A1) == HIGH) {
    tone(8, 494, 100); // play tone 59 (B4 = 494 Hz)
  }
  // if button press on A0 is detected
  if (digitalRead(A2) == HIGH) {
    tone(8, 523, 100); // play tone 60 (C5 = 523 Hz)
  }
  if (digitalRead(A3) == HIGH) {
    tone(8, 587, 100); // play tone 62 (D5 = 587 Hz)
  }
  if (digitalRead(A4) == HIGH) {
    tone(8, 622, 100); // play tone 63 (D#5 = 622 Hz)
  }
  delay(10); // Delay a little bit to improve simulation performance
}
