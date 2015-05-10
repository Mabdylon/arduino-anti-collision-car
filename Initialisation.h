void initialisation() {
  
  pinMode(DOUT_LED_VERTE, OUTPUT);
  pinMode(DOUT_LED_ORANGE, OUTPUT);
  pinMode(DOUT_LED_ROUGE, OUTPUT);
  
  pinMode(DIN_ULTRASONIC_ECHO, INPUT);
  pinMode(DOUT_ULTRASONIC_TRIG, OUTPUT);
  
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
  
  monServo.attach(PWM_SERVO);
  monServo.write(positionDuServo);  
  
  Serial.begin(9600);
  
  }
