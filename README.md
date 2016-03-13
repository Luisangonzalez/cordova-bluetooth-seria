# PhoneGap Arduino LED Example

It is a simple example, the  [Origin Source](https://github.com/don/BluetoothSerial)
show more examples with plugin [cordova-plugin-bluetooth-serial](https://www.npmjs.com/package/cordova-plugin-bluetooth-serial) on npm.


## Arduino

Hardware
 * bq zum
 * Led

## Android

### Upload the sketch

Upload the [sketch](https://github.com/Luisangonzalez/cordova-bluetooth-serial/blob/master/Arduino/Comunicacion_serie_Bluetooth_Z.ino) to your Uno using the Arduino IDE.

### Pair your phone

Pair your Android phone with the bluetooth adapter.

## PhoneGap - Android

This assumes you have the [Android SDK](http://developer.android.com/sdk/index.html) installed and $ANDROID_HOME/tools and $ANDROID_HOME/platform-tools in your system path.

* Adding platforms generates the native project

    `$ cordova platform add android`

* Install the Bluetooth Serial plugin with cordova

    `$ cordova plugin add cordova-plugin-bluetooth-serial`

* Connect your phone to the computer.

* Compile and run the application

    `$ cordova run`
