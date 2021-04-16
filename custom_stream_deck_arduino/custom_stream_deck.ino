#include <Keypad.h>
#include <Keyboard.h>

// Keyboard ASCII constants
#define KEY_F1              0xC2
#define KEY_F2              0xC3
#define KEY_F3              0xC4
#define KEY_F4              0xC5
#define KEY_F5              0xC6
#define KEY_F6              0xC7
#define KEY_F7              0xC8
#define KEY_F8              0xC9
#define KEY_F9              0xCA
#define KEY_F10             0xCB
#define KEY_LEFT_CTRL       0x80
#define KEY_LEFT_SHIFT      0x81
#define KEY_LEFT_ALT        0x82
 
const byte ROWS = 4; // Four rows
const byte COLS = 5; // Five columns
 
// Custom keys matrix
char hexaKeys[ROWS][COLS] = {
  {'A','B','C','D', 'E'},
  {'F','G','H','I', 'J'},
  {'K','L','M','N', 'O'},
  {'P','Q','R','S', 'T'},
};
 
byte rowPins[ROWS] = {15, 14, 16, 10}; // Pins numbers for rows
byte colPins[COLS] = {5, 6, 7, 8, 9}; // Pins numbers for columns
 
// Init keypad
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
 
void setup(){
  Serial.begin(9600);
}
 
void loop(){
  char customKey = customKeypad.getKey();
  if (customKey){
        Serial.println(customKey);
        switch(customKey) {
          case 'A':
            pressKeys(KEY_LEFT_SHIFT, KEY_F1);
            break;
          case 'B':
            pressKeys(KEY_LEFT_SHIFT, KEY_F2);
            break;
          case 'C':
            pressKeys(KEY_LEFT_SHIFT, KEY_F3);
            break;
          case 'D':
            pressKeys(KEY_LEFT_SHIFT, KEY_F4);
            break;
          case 'E':
            pressKeys(KEY_LEFT_SHIFT, KEY_F5);
            break;
          case 'F':
            pressKeys(KEY_LEFT_SHIFT, KEY_F6);
            break;
          case 'G':
            pressKeys(KEY_LEFT_SHIFT, KEY_F7);
            break;
          case 'H':
            pressKeys(KEY_LEFT_SHIFT, KEY_F8);
            break;
          case 'I':
            pressKeys(KEY_LEFT_SHIFT, KEY_F9);
            break;
          case 'J':
            pressKeys(KEY_LEFT_SHIFT, KEY_F10);
            break;
          case 'K':
            pressKeys(KEY_RIGHT_ALT, KEY_F1);
            break;
          case 'L':
            pressKeys(KEY_RIGHT_ALT, KEY_F2);
            break;
          case 'M':
            pressKeys(KEY_RIGHT_ALT, KEY_F3);
            break;
          case 'N':
            pressKeys(KEY_RIGHT_ALT, KEY_F4);
            break;
          case 'O':
            pressKeys(KEY_RIGHT_ALT, KEY_F5);
            break;
          case 'P':
            pressKeys(KEY_RIGHT_ALT, KEY_F6);
            break;
          case 'Q':
            pressKeys(KEY_RIGHT_ALT, KEY_F7);
            break;
          case 'R':
            pressKeys(KEY_RIGHT_ALT, KEY_F8);
            break;
          case 'S':
            pressKeys(KEY_RIGHT_ALT, KEY_F9);
            break;
          case 'T':
            pressKeys(KEY_RIGHT_ALT, KEY_F10);
            break;
        }
  }
}

/*
* Function pressKeys : void
* @param key: optionKey => Can be LeftAlt or LeftShift
* @param key: optionKey => Function key that will be pressed
* 
* Description: This function emulate 3 keyboard presses 
*/
void pressKeys(byte optionKey, byte functionKey) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(optionKey);
    Keyboard.press(functionKey);
  Keyboard.releaseAll();
}
