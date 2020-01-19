# innovationshub

READMINE: Suggested template for Final READMEs
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
This is a README file, demonstrating a suggested README file structure for complete project on GitHub.  

Problem Satement : Network connectivity in remote areas.
organisation : Ministry Of Women And Child Development
Problem Statement Code: AS36

* Aim - Using UART to buit a local network to provide a platform for communication using wired network.
* Working - Remote areas has electric poles as it was one of the very early discovery of mankind. Today we have a large network of electric poles with which a long range communication can be achieved with the help of a micro controller such as Arduino. Serial pole to pole communication can be achieved for remote locations.
Description - UARTs transmit data asynchronously, which means there is no clock signal to synchronize the output of bits from the transmitting UART to the sampling of bits by the receiving UART. Instead of a clock signal, the transmitting UART adds start and stop bits to the data packet being transferred. These bits define the beginning and end of the data packet so the receiving UART knows when to start reading the bits.
When the receiving UART detects a start bit, it starts to read the incoming bits at a specific frequency known as the baud rate. Baud rate is a measure of the speed of data transfer, expressed in bits per second (bps). Both UARTs must operate at about the same baud rate. The baud rate between the transmitting and receiving UARTs can only differ by about 10% before the timing of bits gets too far off.

Installation
------------
Need to install the Arduino IDE setup.

Table of contents
-------------------------
Files Attached

* graphics
1)Code(Master,Slave)
2)Code(Switch,Trigger)
3)Hardware-Circuit(Master,Slave)
4)Hardware-Circuit(Trigger)
 
* video
1)Output(Master,Slave)
2)Output(Trigger)
3)Serial Plotter Representation

* Arduino Files
1)Master
2)Slave

* readme (txt file)
* User Cases-Dependencies (txt file)
----------------------------------------------------------------------------------------------------

Software based ( Use of Arduino)
Tools / Devices
1. Arduino (UNO) [Master/Slave]
2. Jumper Wires 
3. Battery
4. LED
5. Multimeter					
6. Push Button
7. Resistor
8. Connecting Wires

Introduction
------------

Used Arduino for transmisson and recieving of signals as shown by Hardware(consisting coding). 
Arduino(UNO) requires 			

* Tech Stack

Device
--------------------------
Arduino UNO(Master)
Receiver [Arduino(slave)]
Keypad/Trigger system


Coding
-----------------
1> Master
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

2> Slave

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
