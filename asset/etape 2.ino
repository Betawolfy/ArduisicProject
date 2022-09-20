// C++ code
//
int EtatBoutonActuel = 0;

int EtatBoutonPrecedent = 0;

int Compteur = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
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
  }
  EtatBoutonPrecedent = EtatBoutonActuel;
  // programmation de la désactivation du bouton
  if (Compteur % 2 == 0) {
    // on vérifie le reste de la division
    digitalWrite(8, LOW);
  } else {
    // si l'on appuie pas sur le bouton la lampe reste
    // allumée.
    digitalWrite(8, HIGH);
  }
}
