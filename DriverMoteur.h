// Permet un mouvement de typeRoue GAUCHE/DROITE dans le sensMouvement Avant/Arriere
void mouvementRoue(int typeRoue, boolean sensMouvement) {
  if (typeRoue == MOTOR_DC_ROUE_DROITE) {
    digitalWrite(DOUT_MOTEUR_GAUCHE_1, (sensMouvement ? HIGH : LOW));
    digitalWrite(DOUT_MOTEUR_GAUCHE_2, (sensMouvement ? LOW : HIGH));
    analogWrite(DOUT_MOTEUR_GAUCHE_EN, MOTOR_DC_VELOCITY);
  } else if (typeRoue ==  MOTOR_DC_ROUE_GAUCHE) {
    digitalWrite(DOUT_MOTEUR_DROITE_1, (sensMouvement ? HIGH : LOW));
    digitalWrite(DOUT_MOTEUR_DROITE_2, (sensMouvement ? LOW : HIGH));
    analogWrite(DOUT_MOTEUR_DROITE_EN, MOTOR_DC_VELOCITY);  
  }
  delay(MOTOR_DC_DELAY);
}

void avanceEnLigneDroite() {
  mouvementRoue(MOTOR_DC_ROUE_DROITE, true);
  mouvementRoue(MOTOR_DC_ROUE_GAUCHE, true);
}

void arret() {
  analogWrite(DOUT_MOTEUR_DROITE_EN, 0);  
  analogWrite(DOUT_MOTEUR_GAUCHE_EN, 0);  
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
