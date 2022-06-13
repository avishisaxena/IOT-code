#include <SoftwareSerial.h>

#include <IRremote.h>

int ir1=2;
int ir2=3;
int ir3=4;
int ir4=5;

int led1=6;
int led2=7;
int led3=8;
int led4=9;
int led5=10;
int led6=11;

int proxy1=0;
int proxy2=0;
int proxy3=0;
int proxy4=0;

int sensorPin1=A0;
int sensorValue1 = 0;

int sensorPin2=A1;
int sensorValue2 = 0;

int sensorPin3=A2;
int sensorValue3 = 0;

int sensorPin4=A3;
int sensorValue4 = 0;

int sensorPin5=A4;
int sensorValue5 = 0;

int sensorPin6=A5;
int sensorValue6 = 0;

void setup() 
{
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ir3,INPUT);
  pinMode(ir4,INPUT);

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
}


void loop(){
  proxy1=digitalRead(ir1);
  proxy2=digitalRead(ir2);
  proxy3=digitalRead(ir3);
  proxy4=digitalRead(ir4);

if(proxy1==HIGH)
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
}
else
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
}

if(proxy2==HIGH)
{
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
}
else
{
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
}

if(proxy3==HIGH)
{
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
}
else
{
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
}

if(proxy4==HIGH)
{
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
}
else
{
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
}
  
 sensorValue1 = analogRead(sensorPin1);
 Serial.println(sensorValue1);
 if(sensorValue1 < 100)
 {
   Serial.println("LED light on");
   digitalWrite(led6,HIGH);
   delay(1000);
 }
 digitalWrite(led6,LOW);
 delay(sensorValue1);
  
 sensorValue2 = analogRead(sensorPin2);
 Serial.println(sensorValue2);
 if(sensorValue2 < 100)
 {
   Serial.println("LED light on");
   digitalWrite(led5,HIGH);
   delay(1000);
 }
 digitalWrite(led5,LOW);
 delay(sensorValue2);
  
 sensorValue3 = analogRead(sensorPin3);
 Serial.println(sensorValue3);
 if(sensorValue3 < 100)
 {
   Serial.println("LED light on");
   digitalWrite(led4,HIGH);
   delay(1000);
 }
 digitalWrite(led4,LOW);
 delay(sensorValue3);
  
 sensorValue4 = analogRead(sensorPin4);
 Serial.println(sensorValue4);
 if(sensorValue4 < 100)
 {
   Serial.println("LED light on");
   digitalWrite(led3,HIGH);
   delay(1000);
 }
 digitalWrite(led3,LOW);
 delay(sensorValue4);
  
 sensorValue5 = analogRead(sensorPin5);
 Serial.println(sensorValue5);
 if(sensorValue5 < 100)
 {
   Serial.println("LED light on");
   digitalWrite(led2,HIGH);
   delay(1000);
 }
 digitalWrite(led2,LOW);
 delay(sensorValue5);
  
 sensorValue6 = analogRead(sensorPin6);
 Serial.println(sensorValue6);
 if(sensorValue6 < 100)
 {
   Serial.println("LED light on");
   digitalWrite(led1,HIGH);
   delay(1000);
 }
 digitalWrite(led1,LOW);
 delay(sensorValue6);
}
