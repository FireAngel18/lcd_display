#include <Adafruit_LEDBackpack.h>
#include <Adafruit_LiquidCrystal.h>
#include "Adafruit_LEDBackpack.h"

int help = 0;

Adafruit_LiquidCrystal lcd_1(0);

Adafruit_7segment led_display1 = Adafruit_7segment();

void setup()
{ 
  pinMode(3, INPUT);
  lcd_1.begin(16, 2);
  led_display1.begin(112);

  help = 0;
}

void loop()
{
  if (digitalRead(3) == true) {
    lcd_1.setCursor(0, 0);
    help += 1;
    lcd_1.print(help);
    led_display1.clear();
    led_display1.writeDisplay();
  }
  delay(10);
}
