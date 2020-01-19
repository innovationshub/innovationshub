char message[10];

void setup() {
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {

  Serial.readBytes(message,5);
  
  if(message == 'p')
  {
    digitalWrite(12, HIGH);
    delay(1000);
  }
  else if(message == 'm')
  {
    digitalWrite(12,HIGH);
    delay(1000);
  }
  else if(message == 'f')
  {
    digitalWrite(12, HIGH);
    delay(1000);
  }
  digitalWrite(12,LOW); 
}
