#include <Arduino.h>
#include <LiquidCrystal.h>

#include "chars.h"
#include "settings.h"

LiquidCrystal lcd(LCD_RS, LCD_EN, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

void setup() {
    lcd.begin(LCD_COLS, LCD_ROWS);
    lcd.setBacklightPin(LCD_BACKLIGHT, NEGATIVE);

    lcd.createChar(0, buttonOff);
    lcd.createChar(1, buttonOn);

    lcd.noAutoscroll();

    lcd.setCursor(1, 0);
    lcd.write("slct");

    lcd.setCursor(1, 1);
    lcd.write("left");

    lcd.setCursor(7, 0);
    lcd.write("up");

    lcd.setCursor(16-4, 1);
    lcd.write("rght");

    lcd.setCursor(7, 1);
    lcd.write("dwn");
}

void loop() {
    int buttons = analogRead(LCD_BUTTONS);

    lcd.setCursor(0, 0); // select
    lcd.write(buttons > 600 && buttons <= 800 ? 1 : 0);

    lcd.setCursor(0, 1); // left
    lcd.write(buttons > 400 && buttons <= 600 ? 1 : 0);

    lcd.setCursor(6, 1); // down
    lcd.write(buttons > 200 && buttons <= 400 ? 1 : 0);

    lcd.setCursor(6, 0); // up
    lcd.write(buttons > 60 && buttons <= 200 ? 1 : 0);

    lcd.setCursor(11, 1); // right
    lcd.write(buttons <= 60 ? 1 : 0);
}
