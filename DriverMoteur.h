const char DOUT_MOTEUR_GAUCHE_1 = 3;
const char DOUT_MOTEUR_GAUCHE_2 = 4;
const char DOUT_MOTEUR_GAUCHE_EN = 5;

const char DOUT_MOTEUR_DROITE_1 = 6;
const char DOUT_MOTEUR_DROITE_2 = 7;
const char DOUT_MOTEUR_DROITE_EN = 8;

const int MOTOR_DC_VELOCITY = 128;
const int MOTOR_DC_ROUE_DROITE = 1;
const int MOTOR_DC_ROUE_GAUCHE = 2;
const int MOTOR_DC_DELAY = 1000;

boolean enMouvement = false;

void initMoteur() {
  pinMode(DOUT_MOTEUR_GAUCHE_1, OUTPUT);
  pinMode(DOUT_MOTEUR_GAUCHE_2, OUTPUT);
  pinMode(DOUT_MOTEUR_GAUCHE_EN, OUTPUT);
  
  pinMode(DOUT_MOTEUR_DROITE_1, OUTPUT);
  pinMode(DOUT_MOTEUR_DROITE_2, OUTPUT);
  pinMode(DOUT_MOTEUR_DROITE_EN, OUTPUT);
  
  digitalWrite(DOUT_MOTEUR_GAUCHE_1, LOW);
  digitalWrite(DOUT_MOTEUR_GAUCHE_2, LOW);
  analogWrite(DOUT_MOTEUR_GAUCHE_EN, 0);
  
  digitalWrite(DOUT_MOTEUR_DROITE_1, LOW);
  digitalWrite(DOUT_MOTEUR_DROITE_2, LOW);
  analogWrite(DOUT_MOTEUR_DROITE_EN, 0);
}

// Permet un mouvement de typeRoue GAUCHE/DROITE dans le sensMouvement Avant/Arriere
void mouvementRoue(int typeRoue, boolean sensMouvement) {
  enMouvement = true;
  int DOUT1 = (sensMouvement ? HIGH : LOW);
  int DOUT2 = (sensMouvement ? LOW : HIGH);
  if (typeRoue == MOTOR_DC_ROUE_DROITE) {
    digitalWrite(DOUT_MOTEUR_GAUCHE_1, DOUT1);
    digitalWrite(DOUT_MOTEUR_GAUCHE_2, DOUT2);
    analogWrite(DOUT_MOTEUR_GAUCHE_EN, MOTOR_DC_VELOCITY);
  } else if (typeRoue ==  MOTOR_DC_ROUE_GAUCHE) {
    digitalWrite(DOUT_MOTEUR_DROITE_1, DOUT1);
    digitalWrite(DOUT_MOTEUR_DROITE_2, DOUT2);
    analogWrite(DOUT_MOTEUR_DROITE_EN, MOTOR_DC_VELOCITY);
  }
  enMouvement = false;
}

void avanceEnLigneDroite() {
  mouvementRoue(MOTOR_DC_ROUE_DROITE, true);
  mouvementRoue(MOTOR_DC_ROUE_GAUCHE, true);
}

void arret() {
  analogWrite(DOUT_MOTEUR_DROITE_EN, 0);
  analogWrite(DOUT_MOTEUR_GAUCHE_EN, 0);
  enMouvement = false;
}

void pivoter(boolean droite) {
  mouvementRoue(MOTOR_DC_ROUE_DROITE, (droite ? false : true));
  mouvementRoue(MOTOR_DC_ROUE_GAUCHE, (droite ? true : false));
}

void pivoteAGauche() {
  pivoter(false);
}

void pivoteADroite() {
  pivoter(true);
}

void demiTour() {
  pivoteAGauche();
  pivoteAGauche();
}
