uint8_t buf[8] = {0};
class Keys
{
  public:
    void KeyBoard(String Text) {
      for (int i = 0; i < Text.length(); i++) {
        Swh(Text.charAt(i));
      }
    }
  public:
    void Swh(char character) {
      if ('a' <= character && character <= 'z') {
        SentKb((int)character - 97 + 4);
      } else if ('A' <= character && character <= 'Z') {
        SentKb((int)character - 65 + 4, KEY_MOD_LSHIFT);
      } else if ('1' <= character && character <= '9') {
        SentKb((int)character - 49 + 30);
      } else {
        switch (character) {
          case '!': SentKb(KEY_1, KEY_MOD_LSHIFT); break;
          case '@': SentKb(KEY_2, KEY_MOD_LSHIFT); break;
          case '#': SentKb(KEY_3, KEY_MOD_LSHIFT); break;
          case '$': SentKb(KEY_4, KEY_MOD_LSHIFT); break;
          case '%': SentKb(KEY_5, KEY_MOD_LSHIFT); break;
          case '^': SentKb(KEY_6, KEY_MOD_LSHIFT); break;
          case '&': SentKb(KEY_7, KEY_MOD_LSHIFT); break;
          case '*': SentKb(KEY_8, KEY_MOD_LSHIFT); break;
          case '(': SentKb(KEY_9, KEY_MOD_LSHIFT); break;
          case ')': SentKb(KEY_0, KEY_MOD_LSHIFT); break;
          case '_': SentKb(KEY_MINUS, KEY_MOD_LSHIFT); break;
          case '-': SentKb(KEY_MINUS); break;
          case '+': SentKb(KEY_EQUAL, KEY_MOD_LSHIFT); break;

          case '0': SentKb(KEY_0); break;

          case ':': SentKb(KEY_SEMICOLON, KEY_MOD_LSHIFT); break;
          case '/': SentKb(KEY_SLASH); break;
          case '.': SentKb(KEY_DOT); break;

          case '~': SentKb(KEY_GRAVE, KEY_MOD_LSHIFT); break;
        }
      }
    }
  public:
    void SentKb(char Code) {
      buf[2] = Code;
      Serial.write(buf, 8); //送出按鍵
      buf[0] = 0;
      buf[2] = 0;
      Serial.write(buf, 8); //放開按鍵
    }
  public:
    void SentKb(char Code, char KeyPlus) {
      buf[0] = KeyPlus;
      buf[2] = Code;
      Serial.write(buf, 8); //送出按鍵
      buf[0] = 0;
      buf[2] = 0;
      Serial.write(buf, 8); //放開按鍵
    }
  public:
    void SentKb(char Code, char KeyPlus, char KeyTwo) {
      buf[0] = KeyPlus;
      buf[2] = Code;
      buf[3] = KeyTwo;
      Serial.write(buf, 8); //送出按鍵
      buf[0] = 0;
      buf[2] = 0;
      buf[3] = 0;
      Serial.write(buf, 8); //放開按鍵
    }
};
