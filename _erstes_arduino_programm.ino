int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); 
  delay(500);    
  digitalWrite(ledPin, LOW);
  delay(1500);
}
cout<<"Was geht!";

/*
int ledPin = 3;
int pmValue = 0;

void setup(){

}


void loop() {
  analogWrite(ledPin, pmValue++);
  if(pmValue > 254) pmValue = 0;
  delay(10);
}

*/











