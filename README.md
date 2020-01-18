# innovationshub

READMINE: Suggested template for software READMEs
=================================================
Progress so far
------------------------
* Built the required hardware.
* Coded the required program to run the basic version of the code that prints “hello”.
* Tested the basic program that gives the desired output.

Introduction
------------
This single-file repository consists of a README file, and is meant to provide a template for README files as well an illustration of what the README file can be expected to look like. 
This is an example README file demonstrating a suggested README file structure for software projects on GitHub.  

Table of contents
-----------------
Software based ( Use of Arduino)
Tools / Devices
1. Arduino (UNO) [Master, Slave]
2. Jumper Wires 
3. Battery
4. LED

Code 
---------------
1> Master

char mystr[5] = "Hello"; //String data

void setup() {
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
}

void loop() {
  Serial.write(mystr,5); //Write the serial data
  delay(1000);
}


2> Slave

char mystr[10]; //Initialized variable to store recieved data

void setup() {
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
}

void loop() {
  
  Serial.readBytes(mystr,5); //Read the serial data and store in var
  Serial.println(mystr); //Print data on Serial Monitor
  delay(1000);
}
