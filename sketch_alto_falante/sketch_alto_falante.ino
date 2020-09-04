//Autora: Pamela Fialho
//Data: 04/08/2020
//Função: testar a saída som em um alto falante de fone de ouvido

const int pino_falante = 9; //Conectar alto falante ao pino 9
const int pot_freq = 0; //potenciômetro para ajuste de frequência - pino A0
void setup(){}
void loop(){
  int ler_potenc = analogRead(pot_freq); // Ler entrada para ajuste de frequência
  int frequencia = map(ler_potenc, 0, 1023, 100, 3000); //100 Hz a 3 KHz
  int tempo = 300; //duração do tom, em ms
  tone(pino_falante, frequencia, tempo); //envia som ao falante
  delay(300);
}
