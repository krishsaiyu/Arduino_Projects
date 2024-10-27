#include "dht.h"
#define DHT11_PIN 3
dht DHT;
void setup() {
  Serial.begin(9600);
  delay(2000);
  Serial.println("Humidity& temperature Testing ");
  }

void loop() {
  int chk=DHT.read11(DHT11_PIN);
  Serial.println("Humidity");
  Serial.println(DHT.humidity,1);
  Serial.println("Temperature");
Serial.println(DHT.temperature,1);
if(DHT.temperature>20)
{
  Serial.println("Higher value");
}
delay(2000);
 }
