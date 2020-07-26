#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define  trig  D1
#define  echo  D2

long duration;
int distance;

char auth[] = "CocqqvQPtWE5OctdBW431MuKiu_k4_8U";
char ssid[] = "school";   // your ssid 
char pass[] = "hakim1997"; // your pass

BlynkTimer timer;

void sendSensor()
{
  digitalWrite(trig, LOW);   
  delayMicroseconds(2);       

  digitalWrite(trig, HIGH);  
  delayMicroseconds(10);      
  digitalWrite(trig, LOW);   

  duration = pulseIn(echo, HIGH);   
  distance = duration * 0.034 / 2;  

  Serial.print("Distance = ");      
  Serial.println(distance);
  
  Blynk.virtualWrite(V0, distance);
  delay(1000);                        
}

void setup()
{
  pinMode(trig, OUTPUT);  
  pinMode(echo, INPUT);   
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  timer.setInterval(1000L, sendSensor);
}

void loop()
{
  Blynk.run();
  timer.run();
}
