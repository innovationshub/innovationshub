# innovationshub

Table of contents
-----------------
Aim - Using UART to buit a local network to provide a platform for communication using wired network.
Description : UART stands for Universal Asynchronous Receiver/Transmitter.

Introduction
------------
This single-file repository consists of a README file, and is meant to provide a template for README files as well an illustration of what the README file can be expected to look like. 
Attached 
1) Circuit (Hardware)
2) Coding (Screenshot)
3) Output Video
4)Serial Plotter Representation (Video)

Code
-------------

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
  //Serial.println(v1);
  if(v1>0)
  {
    // button 1 police
    message = 'p';
    Serial.println("police");
  }
  else if(v2>0)
  {
    //button 2 medic
    message = 'm';
    Serial.println("medic");
  }
  else if(v3>0)
  {
    //button 3 fire
    message = 'f';
    Serial.println("fire");
  }
}