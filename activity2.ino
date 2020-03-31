#include <Servo.h> // Load Servo Library

const int Potentiometer = A1;
const int Buzzer = 3;
const int RedRGB = A2;
const int GreenRGB = A3;
const int BlueRGB = A4;
Servo ServoMotor;

void setColor(int r, int g, int b) { // Set RGB Led Color
	analogWrite(RedRGB, r);
	analogWrite(GreenRGB, g);
	analogWrite(BlueRGB, b);
}

bool isWithin(int a, int b) { // Check if Potentiometer value is within the specified limits || a is minimum, b is maximum
	if (a<=analogRead(Potentiometer) && analogRead(Potentiometer)<=b) {return true;}
	return false;
}

bool isDivisibleByFive(int a) { // Check if a is divisible by 5
	if(a%5==0) {return true;}
	return false;
}

void setup() {
	pinMode(Potentiometer, INPUT);
	pinMode(Buzzer, OUTPUT);
	pinMode(RedRGB, OUTPUT);
	pinMode(GreenRGB, OUTPUT);
	pinMode(BlueRGB, OUTPUT);
	ServoMotor.attach(4);
}

void loop() {
	int a = analogRead(Potentiometer)
	if(isWithin(0,200)) { //YELLOW
		setColor(255,255,0);
		ServoMotor.write(30);
		if(isDivisibleByFive(a)) {tone(Buzzer, 250);}
		else{noTone(Buzzer);}
	}
	if(isWithin(201,400)) { //GREEN
		setColor(0,255,0);
		ServoMotor.write(60);
		if(isDivisibleByFive(a)) {tone(Buzzer, 250);}
		else{noTone(Buzzer);}
	}
	if(isWithin(401,600)) { //BLUE
		setColor(0,0,255);
		ServoMotor.write(90);
		if(isDivisibleByFive(a)) {tone(Buzzer, 250);}
		else{noTone(Buzzer);}
	}
	if(isWithin(601,800)) { //RED
		setColor(255,0,0);
		ServoMotor.write(120);
		if(isDivisibleByFive(a)) {tone(Buzzer, 250);}
		else{noTone(Buzzer);}
	}
	if(isWithin(801,1000)) { //VIOLET
		setColor(255,0,255);
		ServoMotor.write(150);
		if(isDivisibleByFive(a)) {tone(Buzzer, 250);}
		else{noTone(Buzzer);}
	}
	if(isWithin(1001,1023)) { //WHITE
		setColor(255,255,255);
		ServoMotor.write(180);
		if(isDivisibleByFive(a)) {tone(Buzzer, 250);}
		else{noTone(Buzzer);}
	}
	
}
