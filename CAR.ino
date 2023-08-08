#include <NewPing.h>
#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>


#define TRIGGER_PIN_SONAR_1 .. 
#define ECHO_PIN_SONAR_1 .. 
#define TRIGGER_PIN_SONAR_2 .. 
#define ECHO_PIN_SONAR_2 .. 
#define TRIGGER_PIN_SONAR_3 .. 
#define ECHO_PIN_SONAR_3 .. 
#define TRIGGER_PIN_SONAR_4 .. 
#define ECHO_PIN_SONAR_4 .. 
#define MAX_DISTANCE 20
#define BAUD_RATE 9600 
#define ENA ..
#define ENB ..
#define IN1 ..
#define IN2 ..
#define IN3 ..
#define IN4 ..
#define RXPIN .. 
#define TXPin .. 

const char* ssid = "";
const char* password = "";
const char* serverAddress = "";
NewPing sonar_1(TRIGGER_PIN_SONAR_1,ECHO_PIN_SONAR_1,MAX_DISTANCE); 
NewPing sonar_2(TRIGGER_PIN_SONAR_2,ECHO_PIN_SONAR_2,MAX_DISTANCE); 
NewPing sonar_3(TRIGGER_PIN_SONAR_3,ECHO_PIN_SONAR_3,MAX_DISTANCE); 
NewPing sonar_4(TRIGGER_PIN_SONAR_4,ECHO_PIN_SONAR_4,MAX_DISTANCE); 
void setup()
{
 
    Serial.begin(BAUD_RATE); 
    gpsSerial.begin(BAUD_RATE); 
    WiFi.begin(ssid, password);
    while (Wifi.status() !=WL_CONNECTED)
    {
        delay(1000); 
        Serial.printt("."); 
    }
    Serial.println(""); 
    Serial.println("WIFI connected"); 
}

        usigned int distance_1 = sonar.ping_cm(); 
        usigned int distance_2 = sonar.ping_cm(); 
        usigned int distance_3 = sonar.ping_cm(); 
    pinMode(ENA, OUTPUT); // pin dla silnika A 
    pinMode(ENB, OUTPUT); // pin dla silnika B 
    pinMode(IN1, OUTPUT); // silnik nr 1 A
    pinMode(IN2, OUTPUT); // silnik nr 2 A
    pinMode(IN3, OUTPUT); // silnik nr 3 B
    pinMode(IN4, OUTPUT); // silnik nr 4 B 

    analogWrite(ENA, 0);
    analogWrite(ENB, 0);
    
}

void loop()
{

if ((distance_1 + distance_2) < 30 && (distance_1 + distance_2) > distance_3)
{
    if (distance_4 > 0 )
    {
    analogWrite(ENA, 0);
    analogWrite(ENB, 0);
    }
    moveBackward() ; 
    delay(1000);
    turn_left () ; 
    forward () ;

    if ((distance_1 + distance_3) < 30 && (distance_1 + distance_3) > distance_2)
    {
        if (distance_4 > 0 )
    {
    analogWrite(ENA, 0);
    analogWrite(ENB, 0);
    }
    moveBackward() ; 
    delay(1000);
     turn_right () ; 
    forward () ;
   
  
    } 
}
    
}

void forward()
{
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(ENA, 100);
    analogWrite(ENB, 100);
}

void moveBackward() {
  digitalWrite(IN1, LOW);   
  digitalWrite(IN2, HIGH); 
  digitalWrite(IN3, LOW);   
  digitalWrite(IN4, HIGH);  
  analogWrite(ENA, 100);    // PWM set 100
  analogWrite(ENB, 100);
}

void turn_left ()
{
  digitalWrite(IN1, LOW);   
  digitalWrite(IN2, HIGH); 
  digitalWrite(IN3, HIGH);   
  digitalWrite(IN4, LOW);  
  analogWrite(ENA, 100);    // PWM set 100
  analogWrite(ENB, 100);
}

void turn_right ()
{
  digitalWrite(IN1, HIGH);   
  digitalWrite(IN2, LOW); 
  digitalWrite(IN3, LOW);   
  digitalWrite(IN4, HIGH);  
  analogWrite(ENA, 100);    // PWM set 100
  analogWrite(ENB, 100);
}
