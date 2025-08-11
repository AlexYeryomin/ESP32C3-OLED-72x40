# Copyright (c) 2025 Alex Yeryomin
# The demo program for ESP32-С3 with OLED display 72x40 pixels.

#include <Wire.h>
#include <U8g2lib.h>

// Pins: clock=6, data=5.
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE, 6, 5);

// SSD1306 controller has 132x64 pixel buffer
const unsigned int BufferWidth  = 132;
const unsigned int BufferHeight = 64;
const unsigned int ScreenWidth  = 72;
const unsigned int ScreenHeight = 40;
const unsigned int xOffset = 28;
const unsigned int yOffset = 24;
 
void setup(void) {
  delay(1000);
  u8g2.begin();
  u8g2.setContrast(255);
  u8g2.setBusClock(400000);
  u8g2.setFont(u8g2_font_ncenB10_tr);
  u8g2.drawFrame(xOffset + 0, yOffset + 0, ScreenWidth, ScreenHeight);
  u8g2.setCursor(xOffset + (ScreenWidth/2 - 20), yOffset + ScreenHeight/2);
  u8g2.printf("Hello");
  u8g2.sendBuffer();
}
 
void loop(void) {
}
 

