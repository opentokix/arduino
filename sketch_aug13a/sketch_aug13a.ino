
//Params 
const int micPin = A0; 
int micVal = 0; 
const int relayPin = 4; 


void setup() {
  Serial.begin(9600);
  Serial.println(F("Initialize")); 
  pinMode(micPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
  clickTwice();
}

void clickTwice() {
  digitalWrite(relayPin, HIGH); 
  delay(1000);
  digitalWrite(relayPin, LOW); 
  delay(300);
  digitalWrite(relayPin, HIGH); 
  delay(1000);
  digitalWrite(relayPin, LOW); 
}

void readMicrophone() {
  micVal = analogRead(micPin); 
  if (micVal > 600) {
    clickTwice();
  }
}

void loop() {
  readMicrophone();
}
