#include <Servo.h>
#include "Arduino.h"
#include "DriverLEDs.h"
#include "DriverMoteur.h"
#include "DriverUltraSonicSensor.h"
#include "DriverServo.h"
#include "AlgorithmeQuiChercheUneIssue.h"

void setup() {
  initLEDs();
  initMoteur();
  initServo();
  initUltraSonicSensor();
  Serial.begin(9600);
}

void loop() {
  regardeToutDroit();
  if (laVoieEstLibre()) {
    regardeAGauche();
    if (laVoieEstLibre()) {
      regardeToutDroit();
      if (laVoieEstLibre()) {
        regardeADroite();
        if (laVoieEstLibre()) {
          if (!enMouvement) {
            avanceEnLigneDroite();
          }
        } else {
          chercheUneIssue();
        }
      } else {
        chercheUneIssue();
      }
    } else {
      chercheUneIssue();
    }
  } else {
    chercheUneIssue();
  }
  delay(1);
}
