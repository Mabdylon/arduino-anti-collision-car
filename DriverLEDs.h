// Permet de passer typeLed (green, orange, red) a l'etat allumée (activated)
void switchLed(char typeLed, boolean activated) {
  if (activated) {
    digitalWrite(typeLed, HIGH);
  } else {
    digitalWrite(typeLed, LOW);
  }
}

void allumeLedRouge() {
  switchLed(DOUT_LED_ROUGE, true);
}

void eteindreLedRouge() {
  switchLed(DOUT_LED_ROUGE, false);
}

void allumeLedOrange() {
  switchLed(DOUT_LED_ORANGE, true);
}

void eteindreLedOrange() {
  switchLed(DOUT_LED_ORANGE, false);
}

void allumeLedVerte() {
  switchLed(DOUT_LED_VERTE, true);
}

void eteindreLedVerte() {
  switchLed(DOUT_LED_VERTE, false);
}



