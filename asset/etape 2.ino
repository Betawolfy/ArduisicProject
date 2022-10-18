// C++ code
//
int EtatBoutonActuel = 0;

int EtatBoutonPrecedent = 0;

int Compteur = 0;

void setup()
{
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
  // programmation de la désactivation du bouton
  if (Compteur % 2 == 0) {
    // on vérifie le reste de la division
  if (digitalRead(A2) == HIGH) {
    tone(8, 329.6, 100); // play tone 60 (C5 = 523 Hz)
    Serial.println("Arduisic - playing tone 60");
  }
  } else {
    // si l'on appuie pas sur le bouton la lampe reste
    // allumée.
  if (digitalRead(A2) == HIGH) {
    tone(8, 440, 100); // play tone 60 (C5 = 523 Hz)
    Serial.println("Arduisic - playing tone 60");
  };
};
}
