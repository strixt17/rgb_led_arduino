// C++ code
//

const int buttonPin1 = 2;
const int buttonPin2 = 3;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonpressed1 = 0;

const int redPin = 4;
const int bluePin = 5;
const int greenPin = 6;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  
  pinMode(buttonPin1, INPUT);
  pinMode(3, INPUT);
  
  Serial.begin(9600);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}

void loop()
{
    buttonState1 = digitalRead(buttonPin1);
  	buttonState2 = digitalRead(buttonPin2);
    if (buttonState1 == HIGH) {
    	buttonpressed1 = buttonpressed1 + 1;
    	Serial.println(buttonpressed1);
      	delay(1000);
      if (buttonpressed1 == 1) {
      	setColor(255, 0, 0);
      }
      if (buttonpressed1 == 2) {
      	setColor(0, 255, 0);
      }
      if (buttonpressed1 == 3) {
      	setColor(0, 0, 255);
      }
      if (buttonpressed1 == 4) {
      	setColor(80, 0, 80);
      }
      if (buttonpressed1 == 5) {
      	setColor(0, 255, 255);
      }
      if (buttonpressed1 == 6) {
      	setColor(255, 0, 255);
      }
      if (buttonpressed1 == 7) {
      	setColor(255, 255, 255);
      }
      if (buttonpressed1 == 8) {
      	setColor(255, 255, 0);
      }
      if (buttonpressed1 == 9) {
      	setColor(0, 0, 255);
      }
      if (buttonpressed1 == 10) {
      	setColor(128, 255, 255);
      }
  }
  if (buttonState2 == HIGH) {
      	setColor(0, 0, 0);
    	buttonpressed1 = 0;
      }
  
}