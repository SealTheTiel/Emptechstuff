/* 0-200			RED			0.5s
 * 201-400		BLUE		1s
 * 401-600		WHITE		1.5s
 * 601-800		YELLOW	2s
 * 801-1000		GREEN		2.5s
 * 1001-1023	NONE		
 * PLS FORGIVE ME FOR SYNTAX ERRORS
 */	

const int RedLED = 3;
const int BlueLED = 4;
const int WhiteLED = 5;
const int YellowLED = 6;
const int GreenLED = 7;
const int Potentiometer = x; //dunno what pins are analog

void setup() {
	pinMode(RedLED, OUTPUT);
  pinMode(BlueLED, OUTPUT);
  pinMode(WhiteLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(YellowLED, OUTPUT);
  pinMode(Potentiometer, INPUT);
}

bool IsWithinLimit(int a, int b) {
  if (analogRead(Potentiometer) >= a && analogRead(Potentiometer) <= b) {
    return true;
  }
  else {
    return false;
  }
}

void loop() {
  if IsWithinLimit(0,200) {
    delay(0.5);
    digitalWrite(RedLED, HIGH);
    digitalWrite(BlueLED, LOW);
    digitalWrite(WhiteLED, LOW);
    digitalWrite(YellowLED, LOW);
    digitalWrite(GreenLED, LOW);
  }
  if IsWithinLimit(201,400) {
    delay(1);
    digitalWrite(RedLED, LOW);
    digitalWrite(BlueLED, HIGH);
    digitalWrite(WhiteLED, LOW);
    digitalWrite(YellowLED, LOW);
    digitalWrite(GreenLED, LOW);
  }
  if IsWithinLimit(401,600) {
    delay(1.5);
    digitalWrite(RedLED, LOW);
    digitalWrite(BlueLED, LOW);
    digitalWrite(WhiteLED, HIGH);
    digitalWrite(YellowLED, LOW);
    digitalWrite(GreenLED, LOW);
  }
  if IsWithinLimit(601,800) {
    delay(2);
    digitalWrite(RedLED, LOW);
    digitalWrite(BlueLED, LOW);
    digitalWrite(WhiteLED, LOW);
    digitalWrite(YellowLED, HIGH);
    digitalWrite(GreenLED, LOW);
  }
  if IsWithinLimit(801,1000) {
    delay(2.5);
    digitalWrite(RedLED, LOW);
    digitalWrite(BlueLED, LOW);
    digitalWrite(WhiteLED, LOW);
    digitalWrite(YellowLED, LOW);
    digitalWrite(GreenLED, HIGH);
  }
  if IsWithinLimit(1001,1023) {
    digitalWrite(RedLED, LOW);
    digitalWrite(BlueLED, LOW);
    digitalWrite(WhiteLED, LOW);
    digitalWrite(YellowLED, LOW);
    digitalWrite(GreenLED, LOW);
  }
}
