#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h> // Library for the ST7735
#include <Fonts/Org_01.h>

// Define pin configuration
#define TFT_CS         5   // Chip select control pin
#define TFT_RST        3   // Reset pin (can be connected to Arduino RESET pin)
#define TFT_DC         4   // Data Command control pin
#define TFT_MOSI       23  // Data out pin (MOSI)
#define TFT_SCK        18  // Clock pin (SCK)
#define TFT_BACKLIGHT  2   // Backlight control pin
#define TFT_MISO       -1  // MISO not used in this setup

// Create an instance of the display
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  // Initialize the display
  tft.initR(INITR_BLACKTAB);   // Initialize ST7735 display with black tab
  tft.setRotation(1);          // Set display orientation (adjust as needed)
  
  // Initialize backlight pin
  pinMode(TFT_BACKLIGHT, OUTPUT);
  digitalWrite(TFT_BACKLIGHT, HIGH); // Turn on the backlight
  
  // Clear the screen with black color
  tft.fillScreen(ST77XX_BLACK);
  
  // Set text properties
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(8);
  
  // Display some text
  tft.setCursor(10, 10);
  tft.println("ESP32 with ST7735!");
  tft.setFont(&Org_01);

  // Draw a filled rectangle
  // tft.fillRect(10, 30, 50, 50, ST77XX_RED);
  
  // Draw a circle
  // tft.drawCircle(80, 80, 30, ST77XX_BLUE);
}

void loop() {
  // Cycle through colors for the background
  tft.fillScreen(ST77XX_BLACK);
  // delay(2000);
    
  // Display some text
  tft.setFont(&Org_01);
  tft.setTextSize(4);
  tft.setCursor(35, 65);
  tft.println("ACBD");
  delay(2000);  
  
  // Cycle through colors for the background
  tft.fillScreen(ST77XX_BLACK);
  // delay(2000);
    
  // Display some text
  tft.setFont(&Org_01);
  tft.setTextSize(3);
  tft.setCursor(40, 45);
  tft.println("05:55");
  //delay(1000);
  tft.setFont(&Org_01);
  tft.setTextSize(3);
  tft.setCursor(18, 80);
  tft.println("14/9/24");
  delay(2000);

  tft.fillScreen(ST77XX_BLACK);
  // delay(1000);

  tft.setFont(&Org_01);
  tft.setCursor(10, 80);
  tft.setTextSize(13);
  tft.println("22");
  delay(2000);
  
  /*tft.setCursor(40, 10);
  tft.println("ESP32 with ST7735!");
  delay(1000);
  tft.setCursor(50, 10);
  tft.println("ESP32 with ST7735!");
  delay(1000);

  tft.fillScreen(ST77XX_GREEN);
  delay(1000);
  
  tft.fillScreen(ST77XX_BLUE);
  delay(1000);
  
  tft.fillScreen(ST77XX_BLACK);
  delay(1000);*/
}
