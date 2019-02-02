int redPin = 4; 
int yellowPin = 3;
int greenPin = 2;

void setup() {
pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT);
pinMode(greenPin, OUTPUT);
}

void loop() {
// turn the red light on
digitalWrite(redPin, HIGH);
delay(10000); // wait 5 seconds

digitalWrite(yellowPin, HIGH); // turn on yellow
delay(2000); // wait 2 seconds

digitalWrite(greenPin, HIGH); // turn green on
digitalWrite(redPin, LOW); // turn red off
digitalWrite(yellowPin, LOW); // turn yellow off
delay(10000); // wait ledDelay milliseconds

digitalWrite(yellowPin, HIGH); // turn yellow on
digitalWrite(greenPin, LOW); // turn green off
delay(2000); // wait 2 seconds

digitalWrite(yellowPin, LOW); // turn yellow off
 
}

