unsigned long counttime; // выделение памяти для счетчика

#define RELE  13 // назначаем порт для реле
#define PIR  2 // назначаем порт для PIR sensor

void setup()
{
pinMode(RELE, OUTPUT);
pinMode(PIR, INPUT);
}

void loop()
{
  // если есть движение включаем реле
if (digitalRead(PIR) == HIGH) { digitalWrite(RELE, HIGH); }

 // если нет движения
if (digitalRead(PIR) == LOW) {

 // включаем счетчик на 10 секунд
counttime = millis();
millis() - counttime > 10000;

 // если нет движения в течении 10 секунд выключаем реле
digitalWrite(RELE, LOW);
}
}
