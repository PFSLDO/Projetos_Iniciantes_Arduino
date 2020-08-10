//Autora: Pamela Fialho
//Data: 10/08/2020
//Função: utilizar um sensor de inclinação KY-017 para acender um led

int led_pin = 13;
int switch_pin = 7;

void setup()
{
  pinMode(led_pin, OUTPUT);
  pinMode(switch_pin, INPUT);
}

void loop()
{
  if(digitalRead(switch_pin) == HIGH)
  {
    digitalWrite(led_pin, HIGH);
  }
  else
  {
    digitalWrite(led_pin, LOW);
  }
}
