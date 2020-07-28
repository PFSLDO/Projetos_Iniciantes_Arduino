//Autora: Pamela Fialho
//Data: 13/07/2020
//Função: simular um semáforo variável de acordo com um potenciometro

int ledDelay;
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;
int potPin = 2;

void setup() {pinMode(redPin, OUTPUT); pinMode(yellowPin, OUTPUT); pinMode(greenPin, OUTPUT);}
void loop() {
ledDelay = 4 * analogRead(potPin);
digitalWrite(redPin, HIGH); delay(ledDelay); digitalWrite(redPin, LOW);
digitalWrite(yellowPin, HIGH); delay(ledDelay/2); digitalWrite(yellowPin, LOW);
digitalWrite(greenPin, HIGH); delay(ledDelay); digitalWrite(greenPin, LOW);
digitalWrite(yellowPin, HIGH); delay(ledDelay); digitalWrite(yellowPin, LOW);
}
