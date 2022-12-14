/* MISSION:
 *  - Jouer un son avec le Grove - buzzer quand on appuie sur un bouton pressoir.
 *  - Pouvoir Jouer plusieurs note (octave) avec plusieurs boutons pressoir. 
 *  - Changer la gamme de note avec la pression d'un bouton pressoir séparé.
 *  --------------------------------
 *  Vincent Marais | 13.40
 *  github: https://github.com/Betawolfy
 *  --------------------------------
 *  NOTES TECHNIQUES: 
 *  le Grove - Buzzer doit être connecté sur le port D8.
 *  Les boutons pressoirs qui jouent des notes doivent être connectés sur A0, A1, A2, A3 et A4.
 *  Le bouton pressoir (pour changer de gamme (BCG) doit être branché sur D2.
 */


// Pour garentir le fonctionnement du programme, ces 3 variables sont nessesaires:

// Cette variable stocke l'état actuelle du bouton BCG.
int EtatBoutonActuel = 0;

//Cette variable stocke l'état précédent du bouton.
int EtatBoutonPrecedent = 0;

// cette variable stocke un compteur dont le fonctionnement sera expliqué plus bas.
int Compteur = 0;


void setup() // Procédure d'initialisation.
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
  pinMode(A2, INPUT);
}

void loop() // Boucle infini
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
  // si le reste de la division est égal à 0
    
    // Si le bouton A0 est poussé
  if (digitalRead(A0) == HIGH) {
    tone(8, 261.6, 100); // Jouer le son
    Serial.println("Arduisic - playing tone 57"); 
    // On met le son joué dans le moniteur série
    
  }
    // Si le bouton A1 est poussé
  if (digitalRead(A1) == HIGH) {
    tone(8, 293.7, 100); 
    Serial.println("Arduisic - playing tone 59");
  }
    // Si le bouton A2 est poussé
  if (digitalRead(A2) == HIGH) {
    tone(8, 329.6, 100); 
    Serial.println("Arduisic - playing tone 60");
  }
   // Si le bouton A3 est poussé
  if (digitalRead(A3) == HIGH) {
    tone(8, 392.0, 100); 
    Serial.println("Arduisic - playing tone 62");
  }
   // Si le bouton A4 est poussé
  if (digitalRead(A4) == HIGH) {
    tone(8, 440, 100); 
    Serial.println("Arduisic - playing tone 63");
  }
  } else {
    // sinon (le reste est différent de 0)
    
    // Si le bouton A0 est poussé 
  if (digitalRead(A0) == HIGH) {
    tone(8, 523.3, 100); // play tone 57 (A4 = 440 Hz)
  }
    // Si le bouton A1 est poussé
  if (digitalRead(A1) == HIGH) {
    tone(8, 587.3, 100); // play tone 59 (B4 = 494 Hz)
  }
    // Si le bouton A2 est poussé
  if (digitalRead(A2) == HIGH) {
    tone(8, 659.3, 100); // play tone 60 (C5 = 523 Hz)
  }
   // Si le bouton A3 est poussé
  if (digitalRead(A3) == HIGH) {
    tone(8, 784.0, 100); // play tone 62 (D5 = 587 Hz)
  }
   // Si le bouton A4 est poussé
  if (digitalRead(A4) == HIGH) {
    tone(8, 880.0, 100); // play tone 63 (D#5 = 622 Hz)
  };
};
}
  
