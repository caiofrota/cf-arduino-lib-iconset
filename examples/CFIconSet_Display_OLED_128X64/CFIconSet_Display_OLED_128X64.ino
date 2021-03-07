#include <Adafruit_GFX.h>                                                                           // Adafruit GFX.
#include <Adafruit_SSD1306.h>                                                                       // Adafruit display.
#include <Wire.h>                                                                                   // Wire.

#include <CFIconSet.h>                                                                              // CF Icon Set.

#define DISPLAY_WIDTH                128                                                            // Display width.
#define DISPLAY_HEIGHT               64                                                             // Display height.
#define DISPLAY_ADDRESS              0x3C                                                           // Display I2C address.
Adafruit_SSD1306 display(DISPLAY_WIDTH, DISPLAY_HEIGHT, &Wire, -1);                                 // Display.

void setup() {
    Serial.begin(115200);
    // Config display.
    // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally.
    if(!display.begin(SSD1306_SWITCHCAPVCC, DISPLAY_ADDRESS)) {
        Serial.println("SSD1306 allocation failed");
        for(;;);                                                                                    // Don't proceed, loop forever.
    }
    display.clearDisplay();
    display.drawBitmap(0, 0, CFIconSet::CFLOGO_128X64, 128, 64, 1);
    display.display();
    delay(3000);
}

void loop() {
    display.clearDisplay();
    
    // Draw Bitmaps.
    for (int i = 0; i < 128; i = i+12) {
        display.drawBitmap(i, 0, CFIconSet::NETWORK_HIGH_BARS_8X8, 8, 8, 1);
        display.drawBitmap(i, 8, CFIconSet::NETWORK_MED_BARS_8X8, 8, 8, 1);
        display.drawBitmap(i, 16, CFIconSet::NETWORK_LOW_BARS_8X8, 8, 8, 1);
        display.drawBitmap(i, 24, CFIconSet::PROHIBITED_8X8, 8, 8, 1);
        display.drawBitmap(i, 32, CFIconSet::PHONE_8X8, 8, 8, 1);
        display.drawBitmap(i, 40, CFIconSet::THERMOMETER_8X8, 8, 8, 1);
        display.drawBitmap(i, 48, CFIconSet::WATERDROP_8X8, 8, 8, 1);
        display.drawBitmap(i, 56, CFIconSet::SHOWERS_8X8, 8, 8, 1);
    }

    // Display.
    display.display();
}