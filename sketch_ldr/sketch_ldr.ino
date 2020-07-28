//Autora: Pamela Fialho
//Data: 28/07/2020
//Função: utilizar um LDR como sensor para acender um led quando estiver escuro

int ldr = 7;
int led = 13;

void setup() {
  pinMode(ldr, INPUT); //define o LDR como sensor/entrada
  pinMode(led, OUTPUT); //define o led como saída
}

void loop() {
  if (digitalRead(ldr) == 1) { //caso o LDR detecte que está escuro, o led é acesso
    digitalWrite (led, HIGH);
  }
  else {
    digitalWrite(led, LOW); //se não, fica apagado
  }
}
