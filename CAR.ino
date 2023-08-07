#include <NewPing.h>

#define TRIGGER_PIN_SONAR_1 .. 
#define ECHO_PIN_SONAR_1 .. 
#define TRIGGER_PIN_SONAR_2 .. 
#define ECHO_PIN_SONAR_2 .. 
#define TRIGGER_PIN_SONAR_3 .. 
#define ECHO_PIN_SONAR_3 .. 
#define MAX_DISTANCE 20
#define ENA ..
#define ENB ..
#define IN1 ..
#define IN2 ..
#define IN3 ..
#define IN4 ..

NewPing sonar_1(TRIGGER_PIN_SONAR_1,ECHO_PIN_SONAR_1,MAX_DISTANCE); 
NewPing sonar_2(TRIGGER_PIN_SONAR_2,ECHO_PIN_SONAR_2,MAX_DISTANCE); 
NewPing sonar_3(TRIGGER_PIN_SONAR_3,ECHO_PIN_SONAR_3,MAX_DISTANCE); 
void setup()
{
    Serial.begin(9600); 
        usigned int distance_1 = sonar.ping_cm(); 
        usigned int distance_2 = sonar.ping_cm(); 
        usigned int distance_3 = sonar.ping_cm(); 
    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    
}

void loop()
{


    
}