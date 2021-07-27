# SimpleArduinoKeyboard

SimpleKeyboard is a base on Arduino program. You can Send "secret message" by this program

## Installation

You should write code to your arduino board first and flush KEY.hex firmware to arduino, let computer know this device is a keyboard. So your arduino will be a keyboard. when you wnat to write code, flush USB.hex.

## Usage

* Set baud rate to 9600.
* You can call this function in KeyBoard.ino, the function is simulated keyboard to send Strings
```C++
keys.KeyBoard("String");
```
* This function is call the Specail Key, you can find the variable in key.h
``` C++
keys.SentKb(KEY_TAB);
```
