unsigned long counttime; // выделение памяти для счетчика

#define PIN_RELE  13 // назначаем порт для реле
#define PIN_PIR1  2 // назначаем порт для PIR1 sensor
#define PIN_PIR2  3 // назначаем порт для PIR2 sensor

void setup()
{
pinMode(PIN_RELE, OUTPUT);
pinMode(PIN_PIR1, INPUT);
pinMode(PIN_PIR2, INPUT);
}

void loop()
{
    if (digitalRead(PIN_PIR1) == HIGH || digitalRead(PIN_PIR2) == HIGH) { 
        counttime = millis();
    }

    if (millis() - counttime > 20000) {
        digitalWrite(PIN_RELE, LOW);
    } else {
        digitalWrite(PIN_RELE, HIGH);
    }


}
