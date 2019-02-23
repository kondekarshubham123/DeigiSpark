//This Script Allows you to login automatic in tour gmail account
#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(10000);
  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_1, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("mail.google.com");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print(" ");//Enter your E-mail ID
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print(" ");//Enter your Password
  DigiKeyboard.sendKeyStroke(KEY_ENTER);//
  
  for (;;){ }//Empty
}
