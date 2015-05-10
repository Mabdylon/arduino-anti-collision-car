// Envoi une impulsion de 10 ms au trigger pour demander une mesure
void triggerMesure() {
  digitalWriteEchoHigh(false);
  delayMicroseconds(2);
  digitalWriteEchoHigh(true);
  delayMicroseconds(10);
  digitalWriteEchoHigh(false);
}

// Ecrit sur le trigger ULTRASONIC en HIGH ou en LOW
void digitalWriteEchoHigh(boolean high) {
  digitalWrite(DOUT_ULTRASONIC_TRIG, (high ? HIGH: LOW));
}

// Retourne la distance mesuree en cm
float getDistance() {
  triggerMesure();
  return  pulseIn(DIN_ULTRASONIC_ECHO, HIGH) / 58.0;
} 

void laVoieEstLibre() {
  distance = getDistance();
  return (distance > 10);
}
