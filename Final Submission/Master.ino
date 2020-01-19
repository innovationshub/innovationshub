int v1=0,v2=0,v3=0;
char message;
void setup()
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
}
void loop()
{
  v1 = digitalRead(2);
  v2 = digitalRead(3);
  v3 = digitalRead(4);
  if(v1>0)
  {
    // button 1 police
    message = 'p';
    Serial.println("police");
    Serial.write(message);
  }
  else if(v2>0)
  {
    //button 2 medic
    message = 'm';
    Serial.println("medic");
    Serial.write(message);
  }
  else if(v3>0)
  {
    //button 3 fire
    message = 'f';
    Serial.println("fire");
    Serial.write(message);
  }
}
