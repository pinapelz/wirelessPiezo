#include <Config.h>
#include <EasyBuzzer.h>
const int buzzer = 15;
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
int period = 500;
char auth[] = "AUTHKEY";
int led = 0;
char ssid[] = "SSID";
char pass[] = "PASS";
int freq = 2000;
int channel = 0;
int resolution = 8;

unsigned long time_now = 0;
void Alarm(){
       ledcWriteTone(channel, freq);
     time_now = millis();
     while(millis() < time_now + period){
        //wait approx. [period] ms
  
}
  ledcWriteTone(channel, freq+500);
     time_now = millis();
     while(millis() < time_now + period){
        //wait approx. [period] ms
  
}
  ledcWriteTone(channel, freq+1000);
     time_now = millis();
     while(millis() < time_now + period){
        //wait approx. [period] ms
  
}
  ledcWriteTone(channel, freq+1500);
     time_now = millis();
     while(millis() < time_now + period){
        //wait approx. [period] ms
  
}
  ledcWriteTone(channel, freq+2000);
     time_now = millis();
     while(millis() < time_now + period){
        //wait approx. [period] ms
  
}
}
BLYNK_WRITE(V1)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(pinValue==1){
    
    digitalWrite(led,HIGH);
    Alarm();
    
  }
  else{
    digitalWrite(led,LOW);
     ledcWriteTone(channel, 0);
 
}
}
void setup()
{
  pinMode(led,OUTPUT);
  // Debug console
  Serial.begin(9600);
 
    ledcSetup(channel, freq, resolution);
  ledcAttachPin(15, channel);
  Blynk.begin(auth, ssid, pass);
  
  
}
void loop()
{
  Blynk.run();
}