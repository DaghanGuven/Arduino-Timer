#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4 
Adafruit_SSD1306 display(OLED_RESET);

void setup(){
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();

  display.setTextSize(4);
  display.setTextColor(WHITE);

  display.clearDisplay();
   display.setCursor(40,0);
  display.println(10);
  display.display();

  for(int i=9; i>=0; i--){
    delay(1000);
    display.clearDisplay();
   display.setCursor(55,0);
  display.println(i);
  display.display();
  }
  analogWrite(11, 50);
    delay(1000);
    analogWrite(11, 0);
  
}

void loop(){
  
}
