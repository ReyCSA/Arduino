#include <LiquidCrystal.h>
#include "DHT.h"
 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define DHTPIN A0
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE); //Se inicia una variable que será usada por Arduino para comunicarse con el sensor
 
void setup()
{
    lcd.begin(16,2); //LCD 16x2
    Serial.begin(9600); //Se inicia la comunicación serial 
    dht.begin(); //Se inicia el 
}
 
void loop()
{
    float h = dht.readHumidity(); //Se lee la humedad
     Serial.print("Humedad: "); 
    Serial.print(h); 
    delay(1000);
    /*lcd.clear();
    lcd.setCursor(5,0);
    lcd.print("Humedad:" + String(h) + "%");*/
}
