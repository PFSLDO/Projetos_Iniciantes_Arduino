//Autora: Pamela Fialho
//Data: 28/07/2020
//Função: ativar um rele periodicamente 

int rele = 7;

void setup() {
  pinMode(rele, OUTPUT);
}

void loop() {
  digitalWrite(rele, LOW);
  delay(3000); //tempo do rele ligado (em ms)
  digitalWrite(rele, HIGH);
  delay(1000); //tempo do rele desligado (em ms)
}
