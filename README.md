Some ESP32C3 development boards are equipped with OLED display, 0.42 inch, 72x40 pixels. This teeny tiny display could be convenient to show some measurements from the sensors like pressure or temperature, or, as I used it, to show the max altitude of the water rockets.

This is a short demo on these boards. The sample is written in Micropython, just to show that this OLED can be easily controlled from Micropython. Don't forget to install SH1106 driver for MicroPython.
https://www.youtube.com/watch?v=9VG_HhqDWk4

I also tested this board in Arduino IDE, a similar code but written in C works fine as well. When using Arduino, install ESP32 support and select either "LOLIN C3 Mini" or "ESP32C3 Dev Module" as the target board.

The board is available on AliExpress (search for 'ESP32-C3 OLED', there are tons of them).

![ESP32C3-OLED-72x40](ESP32C3-OLED-72x40.png)

