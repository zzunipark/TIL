#include <LiquidCrystal_I2C.h>
#include <DFRobot_DHT11.h>
DFRobot_DHT11 DHT;
#define DHT11_PIN 10

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  do {
    DHT.read(DHT11_PIN);
    lcd.init();
    lcd.backlight();
    lcd.setCursor(3, 0);
    lcd.print("Temp : ");
    lcd.print(DHT.temperature);
    lcd.print("C");
    lcd.setCursor(2, 1);
    lcd.print("Humid : ");
    lcd.print(DHT.humidity);
    lcd.print("%");

    delay(1000);
  } while(1);
}

void loop() {
}