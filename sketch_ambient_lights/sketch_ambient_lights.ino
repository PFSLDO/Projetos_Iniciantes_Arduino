//Autora: Pamela Fialho
//Data: 04/09/2020
//Função: testar as cores ambientes em um led RGB

int R = 9;
int G = 10;
int B = 11;

void setup(){
    pinMode(R, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(B, OUTPUT);
}

void loop(){
  dayCOLD();
  delay(1000);
  afternoonWHITE();
  delay(1000);
  eveningWARM();
  delay(1000);
  nightHOT();
  delay(1000);
}

void dayCOLD() {
  analogWrite(R, 255);
  analogWrite(G, 242);
  analogWrite(B, 224);
}

void afternoonWHITE() {
  analogWrite(R, 255);
  analogWrite(G, 192);
  analogWrite(B, 127);
}

void eveningWARM() {
  analogWrite(R, 255);
  analogWrite(G, 124);
  analogWrite(B, 38);
}

void nightHOT() {
  analogWrite(R, 255);
  analogWrite(G, 108);
  analogWrite(B, 24);
}
