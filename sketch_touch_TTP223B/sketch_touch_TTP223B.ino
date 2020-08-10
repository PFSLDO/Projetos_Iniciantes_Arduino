//Autora: Pamela Fialho
//Data: 29/07/2020
//Função: utilizar o sensor de toque capacitivo TTP223B para acender um led

int led = 13; //usa o led da placa ou externo, caso esteja conectado
int touch = 7; //pino do sensor

void setup() {
  pinMode(led, OUTPUT); //define o pino do led como saída
  pinMode(touch, INPUT); //define o pino do sensor como entrada
}

void loop() {
  if (digitalRead(touch) == HIGH) //nível lógico slto significa que algo foi detectado
  {
    digitalWrite(led, HIGH); //acende o led caso algo tenha tocado
  }
  else
  {
    digitalWrite(led, LOW); //mantém o led apagado quando não houver nada
  }
}
