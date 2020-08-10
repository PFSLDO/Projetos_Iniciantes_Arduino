//Autora: Pamela Fialho
//Data: 10/08/2020
//Função: utilizar um sensor ultrassônico HC-SR04 para medir distância entre o objeto e o sensor

#include <NewPing.h>

int trigger = 11;
int echo = 12;
int max_dis = 30; //distância máxima que será monitorada (em centímetros)
NewPing sonar(trigger, echo, max_dis); //define os pinos e distância máxima

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  Serial.print("cm");
  delay(50);
}
