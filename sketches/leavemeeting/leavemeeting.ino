#include<Keyboard.h>

const int NUMBUTTONS = 1;
const int MINBUTTON = 2;
const int MAXBUTTON = 21;
const int RXLED = 17;
int pressed[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

boolean validButton(int i) {
  return i <= MINBUTTON+NUMBUTTONS && i <= MAXBUTTON;
}

void setup() {
  for (int i=MINBUTTON; validButton(i); ++i) {
    pinMode(i, INPUT);
  }
  pinMode(RXLED, OUTPUT);
  Serial.begin(9600);
}

boolean buttonPressed(int pin) {
  if (digitalRead(pin) == HIGH) {
    delay(10);
    if (digitalRead(pin) == HIGH) {
      if (!pressed[pin]) {
        pressed[pin] = 1;
        return true;
      }
    }
  }
  return false;
}

boolean buttonReleased(int pin) {
  if (digitalRead(pin) == LOW) {
    delay(10);
    if (digitalRead(pin) == LOW) {
      if (pressed[pin]) {
        pressed[pin] = 0;
        return true;
      }
    }
  }
  return false;
}

void doPressedAction(int pin) {
  switch(pin) {
    case 2:
    // Uncomment the following if you want to trigger action on press
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    delay(100);
    Keyboard.releaseAll();
    break;
  }
}

void doReleasedAction(int pin) {
  switch(pin) {
    case 2:
    // Uncomment the following if you want to trigger action on release
    //Keyboard.press(KEY_LEFT_ALT);
    //Keyboard.press(KEY_F4);
    //delay(100);
    //Keyboard.releaseAll();
    break;
  }
}

void loop() {
  for (int i=MINBUTTON; validButton(i); ++i) {
    if (buttonPressed(i)) {
      doPressedAction(i);
    }
    if (buttonReleased(i)) {
      doReleasedAction(i);
    }
  }
  digitalWrite(RXLED, HIGH);
}
