//Autora: Pamela Fialho
//Data: 29/07/2020
//Função: utilizar um sensor de obstáculo como sensor para acender um led quando algo for detectado

int led = 13; //usa o led da placa ou externo, caso esteja conectado
int ir = 7;  //pino do sensor

void setup() {
  pinMode(led, OUTPUT); //define o pino do led como saída
  pinMode(ir, INPUT); //define o pino do ir como sensor/entrada
}

void loop() {
  if (digitalRead(ir) == LOW) //nível lógico baixo significa que algo foi detectado
  {
    digitalWrite(led, HIGH); //acende o led caso algo esteja na frente
  }
  else
  {
    digitalWrite(led, LOW); //mantém o led apagado quando não houver nada
  }
}
