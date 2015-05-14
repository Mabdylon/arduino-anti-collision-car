boolean chercheUneIssueAGauche() {
  regardeAGauche();
  delay(DELAY_TO_LOOK);
  return laVoieEstLibre();
}

boolean chercheUneIssueADroite() {
  regardeADroite();
  delay(DELAY_TO_LOOK);
  return laVoieEstLibre();
}

void chercheUneIssue() {
  arret();
  if (chercheUneIssueAGauche()) {
    pivoteAGauche();
  } else if (chercheUneIssueADroite()) {
    pivoteADroite();
  } else {
    demiTour();
  }
}


