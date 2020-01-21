# wirelessPiezo
A Wireless Piezo Buzzer that can be controlled using the Blynk App
![Picture of Breadboard](https://i.imgur.com/9RoGUTo.png)

***NOTICE: THIS PROJECT USES THE ESP32's WIFI Capabilities!***
You Will Need:
Piezo Buzzer x1
ESP32 Development Board x1
LED (Optional) x1
Breadboard x1
Jumper Cables x 10
Resistors (Depends on volume) x 2

**How to Install and Use**
1. Download the Arduino ".ino" file and open using Arduino IDE
2. Assemble the Circut as you see it on screen.
3. Download the Blynk App 
4. Create a new project and add in a button
5. Set the button to Virtual Pin 0 (V0) 
6. Go back to the Arduino Code and find the API Key String near the top
7. Paste inside the quotations your project's API Key (Check your Blynk Account's Email for it)
8. Enter your WiFi details (SSID: Name of Wifi, PASS: Password)
9. Upload Code
*You May have to hold down the IO/BOOT/UPLOAD button on your ESP32 as you upload to put it in Upload mode*
10. Run the project on your phone and you should see your device connected to your phone
