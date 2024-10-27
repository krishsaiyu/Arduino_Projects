
#include <GSM.h>
GSM gsmAccess;
GSM_SMS sms;

void setup()
{
  // initialize serial communications and wait for port to open:
  Serial.begin(9600);

  Serial.println("SMS Messages Sender");

  // connection state
  boolean notConnected = true;

  // Start GSM shield
  // If your SIM has PIN, pass it as a parameter of begin() in quotes

  Serial.println("GSM initialized");
}

void loop()
{

  Serial.print("Enter a mobile number: ");
  char remoteNum[20]="9843881936";  // telephone number to send sms
  
  Serial.println(remoteNum);

  // sms text
  Serial.print("Now, enter SMS content: ");
  char txtMsg[200]="HELLO BUDDY TESTING";
  
  Serial.println("SENDING");
  Serial.println();
  Serial.println("Message:");
  Serial.println(txtMsg);

  // send the message
  sms.beginSMS(remoteNum);
  sms.print(txtMsg);
  sms.endSMS();
  Serial.println("\nCOMPLETE!\n");
}



