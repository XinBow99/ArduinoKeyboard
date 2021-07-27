#include "key.h"
#include "key_Method.h"+
Keys keys;
void setup()
int analogPin = 0;
int analogPin1 = 1;
{
  Serial.begin(9600);
  keys.KeyBoard("Hello World");
  keys.SentKb(KEY_TAB);
  keys.KeyBoard("120617");
  keys.SentKb(KEY_KPENTER);
}
void loop()
{
  int val = analogRead(analogPin);
  int val1 = analogRead(analogPin1);
  if(){
    
  }
}
//------------------------------------------------
