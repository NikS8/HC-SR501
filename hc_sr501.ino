unsigned long counttime; // выделение памяти для счетчика

#define RELE  13 // назначаем порт для реле
#define PIR1  2 // назначаем порт для PIR1 sensor
#define PIR2  3 // назначаем порт для PIR2 sensor

void setup()
{
pinMode(RELE, OUTPUT);
pinMode(PIR1, INPUT);
pinMode(PIR2, INPUT);
}

void loop()
{
    if (digitalRead(PIR1) == HIGH || digitalRead(PIR2) == HIGH) { 
        counttime = millis();
    }

    if (millis() - counttime > 20000) {
        digitalWrite(RELE, LOW);
    } else {
        digitalWrite(RELE, HIGH);
    }


}
