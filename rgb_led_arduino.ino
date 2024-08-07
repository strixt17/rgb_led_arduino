// C++ code
//

const int buttonPin1 = 2;
int buttonState1 = 0;
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


void loop()
{
    buttonState1 = digitalRead(buttonPin1);
    if (buttonState1 == HIGH) {
    	buttonpressed1 = buttonpressed1 + 1;
    	Serial.println(buttonpressed1);
      	delay(1000);

  
}