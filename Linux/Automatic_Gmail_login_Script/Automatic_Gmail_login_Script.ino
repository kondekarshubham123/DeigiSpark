//This Script Allows you to login automatic in tour gmail account
#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_1, MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(6000);
  DigiKeyboard.sendKeyStroke(KEY_P, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(7000);
  DigiKeyboard.print("https://accounts.google.com/signin/v2/identifier?continue=https%3A%2F%2Fmail.google.com%2Fmail%2F&service=mail&sacu=1&rip=1&flowName=GlifWebSignIn&flowEntry=ServiceLogin");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(8000);
  DigiKeyboard.print("email");//Enter your E-mail ID
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(6000);
  DigiKeyboard.print("password");//Enter your Password
  DigiKeyboard.sendKeyStroke(KEY_ENTER);//Log In Succesfully
  
  for (;;){ }//Empty
}
