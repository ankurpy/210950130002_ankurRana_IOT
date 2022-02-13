//LDR sensor

const int ledPin = 5;
const int ldrPin = 7; 

void setup() { 

Serial.begin(115200);

pinMode(ledPin, OUTPUT);
pinMode(ldrPin, INPUT);

}

void loop() { 

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 200) {

digitalWrite(ledPin, HIGH); 

Serial.print("Darkness over here,turn on the LED : ");

Serial.println(ldrStatus);

} else {

digitalWrite(ledPin, LOW);

Serial.print("There is sufficeint light , turn off the LED : ");

Serial.println(ldrStatus);

}

}