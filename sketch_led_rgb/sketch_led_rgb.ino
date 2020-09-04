//Autora: Pamela Fialho
//Data: 04/09/2020
//Função: testar as transições de cores em um led RGB

int R = 9;
int G = 10;
int B = 11;

int ValorRed = 255;
int ValorGreen = 0;
int ValorBlue = 0;

void setup(){
    pinMode(R, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(B, OUTPUT);
    analogWrite(R, ValorRed);
    analogWrite(G, ValorGreen);
    analogWrite(B, ValorBlue);
}

void loop(){

    for (ValorGreen = 0; ValorGreen <255; ValorGreen=ValorGreen+5){
        analogWrite(G, ValorGreen);
        delay(50);
    }
    for (ValorRed = 255; ValorRed > 0; ValorRed=ValorRed-5){
        analogWrite(R, ValorRed);
        delay(50);
    }
    for (ValorBlue = 0; ValorBlue < 255; ValorBlue=ValorBlue+5){
        analogWrite(B, ValorBlue);
        delay(50);
    }

    for (ValorGreen = 255; ValorGreen > 0; ValorGreen=ValorGreen-5){
        analogWrite(G, ValorGreen);
        delay(50);
    }
    for (ValorRed = 0; ValorRed < 255; ValorRed=ValorRed+5){
        analogWrite(R, ValorRed);
        delay(50);
    }
    for (ValorBlue = 255; ValorBlue > 0; ValorBlue=ValorBlue-5){
        analogWrite(B, ValorBlue);
        delay(50);
    }
}
