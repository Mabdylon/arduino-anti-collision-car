#include <Servo.h>
#include "Arduino.h"
#include "AffectationDesEntreesSorties.h"
#include "DeclarationDesVariables.h"
#include "Configuration.h"
#include "DriverLEDs.h"
#include "DriverMoteur.h"
#include "DriverUltraSonicSensor.h"
#include "DriverServo.h"
#include "Initialisation.h"
#include "AlgorithmeQuiChercheUneIssue.h"


void setup() {
  initialisation();
}

void loop() {
  /*RegardeToutDroit();
  if (LaVoieEstLibre()) {
    RedardeAGauche();
    if (LaVoieEstLibre()) {
      RegardeToutDroit();
      if (LaVoieEstLibre()) {
        RegardeADroite();
        if (LaVoieEstLibre()) {
          if (!enMouvement) {
            AvanceEnLigneDroite();
          }
        } else {
          ChercheUneIssue();
        }
      } else {
        ChercheUneIssue();
      }
    } else {
      ChercheUneIssue();
    }
  } else {
    ChercheUneIssue();
  }
  delay(1);*/
}
