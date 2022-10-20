/* MISSION:
 *  - Jouer un son avec le Grove - buzzer quand on appuie sur un bouton pressoir.
 *  - Pouvoir Jouer plusieurs note (octave) avec plusieurs boutons pressoir. 
 *  --------------------------------
 *  Vincent Marais Paul Rallet
 *  github: https://github.com/Betawolfy
 *  --------------------------------
 *  NOTES TECHNIQUES: 
 *  le Grove - Buzzer doit être connecté sur le port D8.
 *  Les boutons pressoirs qui jouent des notes doivent être connectés sur A0, A1, A2, A3 et A4.
 */

int pos = 0;

void setup() // Procédure d'initialisation.
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
}

void loop() // boucle infinie
{
  // Si le bouton A0 est poussé
  if (digitalRead(A0) == HIGH) {
    tone(8, 65.41, 100); // jouer son 57 (A4 = 440 Hz)
  }
  // Si le bouton A1 est poussé
  if (digitalRead(A1) == HIGH) {
    tone(8, 73.42, 100); // jouer son 59 (B4 = 494 Hz)
  }
  // Si le bouton A2 est poussé
  if (digitalRead(A2) == HIGH) {
    tone(8, 82.41, 100); // jouer son 60 (C5 = 523 Hz)
  }
  // Si le bouton A3 est poussé
  if (digitalRead(A3) == HIGH) {
    tone(8, 98, 100); // jouer son 62 (D5 = 587 Hz)
  }
  // Si le bouton A4 est poussé
  if (digitalRead(A4) == HIGH) {
    tone(8, 110, 100); // jouer son 63 (D#5 = 622 Hz)
  }
  delay(10); // Delay a little bit to improve simulation performance
}
