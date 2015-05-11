boolean chercheUneIssueAGauche() {
  regardeAGauche();
  delay(1000);
  return laVoieEstLibre();
}

boolean chercheUneIssueADroite() {
  regardeADroite();
  delay(1000);
  return laVoieEstLibre();
}

void chercheUneIssue() {
  if (chercheUneIssueAGauche()) {
    pivoteAGauche();
  } else if (chercheUneIssueADroite()) {
    pivoteADroite();
  } else {
    demiTour();
  }
}


