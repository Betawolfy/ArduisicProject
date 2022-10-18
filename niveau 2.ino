int EtatBoutonActuel = 0;

int EtatBoutonPrecedent = 0;

int Compteur = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
  pinMode(A2, INPUT);
}

void loop()
{
  EtatBoutonActuel = digitalRead(2);
  // on définit la variable "étatboutonactuel" sur la
  // broche numérique n°2.
  if (EtatBoutonActuel != EtatBoutonPrecedent) {
    // on différencie l'état des deux boutons
    if (EtatBoutonActuel == HIGH) {
      Compteur += 1;
      // on ajoute 1 au compteur pour allumer le bouton
    }
    delay(5); // Wait for 5 millisecond(s)
    // délai pour s'assurer un bon fonctionnement du
    // programme
  };
  EtatBoutonPrecedent = EtatBoutonActuel;
  Serial.println(EtatBoutonActuel);
  // programmation de la désactivation du bouton
  if (Compteur % 2 == 0) {
    // on vérifie le reste de la division
  if (digitalRead(A0) == HIGH) {
    tone(8, 261.6, 100); // play tone 57 (A4 = 440 Hz)
    Serial.println("Arduisic - playing tone 57");
  }
  // if button press on A1 is detected
  if (digitalRead(A1) == HIGH) {
    tone(8, 293.7, 100); // play tone 59 (B4 = 494 Hz)
    Serial.println("Arduisic - playing tone 59");
  }
  // if button press on A0 is detected
  if (digitalRead(A2) == HIGH) {
    tone(8, 329.6, 100); // play tone 60 (C5 = 523 Hz)
    Serial.println("Arduisic - playing tone 60");
  }
  if (digitalRead(A3) == HIGH) {
    tone(8, 392.0, 100); // play tone 62 (D5 = 587 Hz)
    Serial.println("Arduisic - playing tone 62");
  }
  if (digitalRead(A4) == HIGH) {
    tone(8, 440, 100); // play tone 63 (D#5 = 622 Hz)
    Serial.println("Arduisic - playing tone 63");
  }
  } else {
    // si l'on appuie pas sur le bouton la lampe reste
    // allumée.
  if (digitalRead(A0) == HIGH) {
    tone(8, 523.3, 100); // play tone 57 (A4 = 440 Hz)
  }
  // if button press on A1 is detected
  if (digitalRead(A1) == HIGH) {
    tone(8, 587.3, 100); // play tone 59 (B4 = 494 Hz)
  }
  // if button press on A0 is detected
  if (digitalRead(A2) == HIGH) {
    tone(8, 659.3, 100); // play tone 60 (C5 = 523 Hz)
  }
  if (digitalRead(A3) == HIGH) {
    tone(8, 784.0, 100); // play tone 62 (D5 = 587 Hz)
  }
  if (digitalRead(A4) == HIGH) {
    tone(8, 880.0, 100); // play tone 63 (D#5 = 622 Hz)
  };
};
}
  