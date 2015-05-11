const char PWM_SERVO = 9;

Servo servo;
int positionDuServo = 90;

const int SERVO_LOOK_LEFT = 45;
const int SERVO_LOOK_FORWARD = 90;
const int SERVO_LOOK_RIGHT = 135;

void initServo() {
  servo.attach(PWM_SERVO);
  servo.write(positionDuServo);
}

void regardeAGauche() {
  servo.write(SERVO_LOOK_LEFT);
}

void regardeADroite() {
  servo.write(SERVO_LOOK_RIGHT);
}

void regardeToutDroit() {
  servo.write(SERVO_LOOK_FORWARD);
}
