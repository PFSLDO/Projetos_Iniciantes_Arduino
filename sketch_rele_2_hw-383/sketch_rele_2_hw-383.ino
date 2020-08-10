//Autora: Pamela Fialho
//Data: 10/08/2020
//Função: ativar um rele de dois canais periodicamente 

int pin1 = 7;
int pin2 = 8;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}

void loop() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  delay(3000); //tempo do rele ligado (em ms)
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  delay(1000); //tempo do rele desligado (em ms)
}
