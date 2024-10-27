#include "SIM900.h"
#include <SoftwareSerial.h>

//#include "inetGSM.h"


#include "sms.h"
SMSGSM sms;



int numdata;
int value;
boolean started=false;
char smsbuffer[160];
char n[20];
int PIN = A0;
int sensor = 450;

int LED1 = 11;

void setup() 
{
 pinMode(LED1, OUTPUT);
  pinMode (PIN,INPUT);
  value = analogRead (PIN);
  Serial.begin(9600);
  Serial.println(value);
  Serial.println("GSM Shield testing.");
 
 if (value > sensor){
    digitalWrite(LED1, HIGH);
 }
  
  if (gsm.begin(2400)){
    Serial.println("\nstatus=READY");
    started=true;  
  }
  else
  {Serial.println("\nstatus=IDLE");}
   
    
    
    (sms.SendSMS("+919159933324", "RJ27 CB 3**9 Pollution Level Exceeding , Attention Required "));
      Serial.println("\nSMS sent OK");
 };


void loop() 
{
  if(started){
    
    if(gsm.readSMS(smsbuffer, 160, n, 20))
    {
      Serial.println(n);
      Serial.println(smsbuffer);
    }
    
    
  }
};

