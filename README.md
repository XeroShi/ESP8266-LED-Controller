#WARNING!!
I am working on improving this repo and project to make it more efficient and better. Everything below this is outdated until otherwise.

# ESP8266 Controller with Blynk.
Control your LED Light Strip with An ESP8266 and a Mobile Device.

## Components needed 
First you'll need the following:
1. ESP8266 preferably a [NodeMCU](https://www.amazon.com/HiLetgo-Internet-Development-Wireless-Micropython/dp/B010O1G1ES)
2. A 5V Light Strip like a [ws2812b](https://www.amazon.com/ALITOVE-Individually-Addressable-Flexible-Waterproof/dp/B018X04ES2) or [ws2811](https://www.amazon.com/ALITOVE-LED-Individually-Addressable-Waterproof/dp/B01AG923GI/ref=sr_1_4?crid=1DLEPATFBWI94&keywords=ws2811&qid=1572210283&sprefix=ws2%2Cmi%2C144&sr=8-4)
3. 3 Male to Female Jumper Wires.
4. A Micro USB or 5v Power Supply.
5. A Mobile Phone.
6. A Computer with Arudino IDE.

## Instructions

You first need to download the Blynk, NeoPixel and ESP8266 Libraries installed into Arduino IDE.
To download the Blynk and Neopixel Libraries you just need to go to Tools -> Manage Libraries then search for the names.

### Blynk:

![What the Blynk Library looks like.](https://i.imgur.com/jwaLdll.png)


### NeoPixel:

![What the NeoPixel Library looks like.](https://i.imgur.com/fdc4KWc.png)


### ESP8266:

To first download the ESP8266 Board Library you must first go into your preferences and paste this link into the circled area: 
`http://arduino.esp8266.com/stable/package_esp8266com_index.json`

![First step to getting the ESP8266 Library.](https://i.imgur.com/BUa4yUE.png)

Once you pasted the link, close out the window. Once you done that go into Tools -> Boards -> Boards Manager and search for ESP8266 then download it.

![Last step to getting ESP8266 Library](https://i.imgur.com/uToKObm.png)

## Wiring

Once you have all of the Libraries downloaded, download my code and upload it to your NodeMCU. Make sure to read the comments! Then wire it according to my Table.

NodeMCU | LED Strip
------------ | -------------
D2 (GPIO 4) | DIN (Data In)
VIN | 5V In
GND | GND

## Blynk App Set Up

Once you finished wiring everything up follow the images and instructions.

Please Download the Blynk App and make an account to get your Auth Codes
IOS: [Download](https://apps.apple.com/us/app/blynk-iot-for-arduino-esp32/id808760481)
Android: [Download](https://play.google.com/store/apps/details?id=cc.blynk&hl=en_US)

<p>Download the Blynk App then Create a New Project</p>
<img src="https://i.imgur.com/Ewvwp1U.jpg"  width="250" height="400">

<p>Use these settings but you can change the name and theme just be sure to set Device and Connection.</p>
<img src="https://i.imgur.com/pEimOlq.jpg"  width="250" height="400">

<p>You'll then have a Auth Token sent to your Email.</p>
<img src="https://i.imgur.com/zP7wiGp.jpg"  width="250" height="400">

Open the Widget Box on the left side of the screen by pressing the + at the top of the screen then click on zeRGBra
<img src="https://i.imgur.com/r98uSsV.png"  width="250" height="400">

<img src="https://i.imgur.com/qV8rVs7.jpg"  width="250" height="400">


<p>Click on the zeRGBra Widget then click the switch to Merge and set the Pin to V2</p>
<img src="https://i.imgur.com/w2JDFP4.jpg"  width="250" height="400">

## You're Done!
Once you've done all of that and wired it then you can click the Play button at the top right of the screen and now you can control your LED Strip from WiFi!

## Upcoming features:
Auto Reconnect

Animations Buttons

Bightness Control

OTA Support
