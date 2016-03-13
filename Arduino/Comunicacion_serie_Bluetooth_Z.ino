/***   Included libraries  ***/
#include <SoftwareSerial.h>
#include <bqSoftwareSerial.h>
#include <Servo.h>
#include <Wire.h>




/***   Global variables and function definition  ***/
bqSoftwareSerial bluetooth_0(0, 1, 19200);
int led_0 = 13;
bool ledon = false;
String read = "";
/***   Setup  ***/
void setup() {}

/***   Loop  ***/
void loop() {
    bluetooth_0.println("Probando comunicación por Bluetooth");
    // delay(1000);
    if (bluetooth_0.available() > 0) {
        bluetooth_0.println("Avaliable");
        read = bluetooth_0.readString();
        if (read == "b" || ledon) {
            bluetooth_0.print("ON");
            digitalWrite(led_0, HIGH);
            ledon = true;
        } else if (read == "c" || !ledon) {
            bluetooth_0.print("OFF");
            digitalWrite(led_0, LOW);
            ledon = false;
        }
    }

}