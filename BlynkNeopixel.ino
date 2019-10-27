#define BLYNK_PRINT Serial
#include <Adafruit_NeoPixel.h>
#include <BlynkSimpleEsp8266_SSL.h>
#include <ESP8266WiFi.h>

//This goes to the D2 Pin.
#define PIN 4
//Change the Number of LEDs to the ones you have
#define NUMPIXELS 50
#define BLYNK_PRINT Serial
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_RGB + NEO_KHZ800);

//Change this to your home wifi credentials and to your auth code.
char ssid[] = "KingCrimson";
char pass[] = "Epitaph";
char auth[] = "HowDoesKingCrimsonWork?";

void setup()
{
Blynk.begin(auth, ssid, pass);
pixels.begin();
}
BLYNK_WRITE(V2)
{

int R = param[0].asInt();
int G = param[1].asInt();
int B = param[2].asInt();
for(int i=0;i<NUMPIXELS;i++){

pixels.setPixelColor(i, pixels.Color(R,G,B));

pixels.show();
}
}

void loop()
{
Blynk.run();
}
