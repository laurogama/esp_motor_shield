#include <Esp_motor_shield.h>


void setup(){
  Serial.begin(115200);
  Serial.println();
  Serial.println("Starting...");
  pinMode(DIRA, OUTPUT);
  pinMode(PWMA, OUTPUT);

  analogWrite(PWMA,0);
  digitalWrite(DIRA,1);
  delay(5000);
  analogWrite(PWMA,5);
  delay(5000);
  analogWrite(PWMA,50);
  delay(5000);
  analogWrite(PWMA,100);
  delay(5000);
  analogWrite(PWMA,50);
  delay(5000);
  analogWrite(PWMA,0);
  delay(3000);
}
void loop(){


}
