// Piny pre tlačidlá pre písmená
#define buzzerPin 13
#define buttonPin 2

bool buttonState = false;
bool previousButtonState = false;

const int buttonAPin = 2; // A
const int buttonBPin = 3; // B
const int buttonCPin = 4; // C
const int buttonDPin = 5; // D
const int buttonEPin = 6; // E
const int buttonFPin = 7; // F
const int buttonGPin = 8; // G
const int buttonHPin = 9; // H
const int buttonIPin = 10; // I
const int buttonJPin = 22; // J
const int buttonKPin = 23; // K
const int buttonLPin = 24; // L
const int buttonMPin = 25; // M
const int buttonNPin = 26; // N
const int buttonOPin = 27; // O
const int buttonPPin = 29; // P
const int buttonQPin = 30; // Q
const int buttonRPin = 31; // R
const int buttonSPin = 32; // S
const int buttonTPin = 33; // T
const int buttonUPin = 34; // U
const int buttonVPin = 35; // V
const int buttonWPin = 36; // W
const int buttonXPin = 37; // X
const int buttonYPin = 38; // Y
const int buttonZPin = 39; // Z

// Piny pre tlačidlá pre písmená

const int button0Pin = 40; // 0
const int button1Pin = 41; // 1
const int button2Pin = 42; // 2
const int button3Pin = 43; // 3
const int button4Pin = 44; // 4
const int button5Pin = 45; // 5
const int button6Pin = 46; // 6
const int button7Pin = 47; // 7
const int button8Pin = 48; // 8
const int button9Pin = 49; // 9

// Pridaj piny pre ďalšie tlačidlá pre písmená a čísla

// Písmená abecedy v morzeovskom kóde
const char* morseCodeLetters[] = {
  ".-",   // A
  "-...", // B
  "-.-.", // C
  "--.", // D
  ".", // E
  "..-.", // F
  "--.", // G
  "....", // H
  "..", // I
  ".---", // J
  ".-.-", // K
  ".-..", // L
  "--", // M
  "-.", // N
  "---", // O
  ".--.", // P
  "--.-", // Q
  ".-.", // R
  "...", // S
  "-", // T
  "..-", // U
  "...-", // V
  ".--", // W
  "-..-", // X
  "-.--", // Y
  "--..", // Z
};

// Čísla v morzeovskom kóde
const char* morseCodeNumbers[] = {
  "-----", // 0
  ".----", // 1
  "..---", // 2
  "...--", // 3
  "....-", // 4
  ".....", // 5
  "-....", // 6
  "--...", // 7
  "---..", // 8
  "----.", // 9
};

void setup() {
  pinMode(buttonAPin, INPUT_PULLUP);
  pinMode(buttonBPin, INPUT_PULLUP);
  pinMode(buttonCPin, INPUT_PULLUP);
  pinMode(buttonDPin, INPUT_PULLUP);
  pinMode(buttonEPin, INPUT_PULLUP);
  pinMode(buttonFPin, INPUT_PULLUP);
  pinMode(buttonGPin, INPUT_PULLUP);
  pinMode(buttonHPin, INPUT_PULLUP);
  pinMode(buttonIPin, INPUT_PULLUP);
  pinMode(buttonJPin, INPUT_PULLUP);
  pinMode(buttonKPin, INPUT_PULLUP);
  pinMode(buttonLPin, INPUT_PULLUP);
  pinMode(buttonOPin, INPUT_PULLUP);
  pinMode(buttonPPin, INPUT_PULLUP);
  pinMode(buttonQPin, INPUT_PULLUP);
  pinMode(buttonRPin, INPUT_PULLUP);
  pinMode(buttonSPin, INPUT_PULLUP);
  pinMode(buttonTPin, INPUT_PULLUP);
  pinMode(buttonUPin, INPUT_PULLUP);
  pinMode(buttonVPin, INPUT_PULLUP);
  pinMode(buttonWPin, INPUT_PULLUP);
  pinMode(buttonXPin, INPUT_PULLUP);
  pinMode(buttonYPin, INPUT_PULLUP);
  pinMode(buttonZPin, INPUT_PULLUP);

  // CISLA

  pinMode(button0Pin, INPUT_PULLUP);
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
  pinMode(button4Pin, INPUT_PULLUP);
  pinMode(button5Pin, INPUT_PULLUP);
  pinMode(button6Pin, INPUT_PULLUP);
  pinMode(button7Pin, INPUT_PULLUP);
  pinMode(button8Pin, INPUT_PULLUP);
  pinMode(button9Pin, INPUT_PULLUP);
  
  // BUZZER
  
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonAPin) == LOW) {
    playMorseCode(morseCodeLetters[0]); // Písmeno A
    delay(200);
  }

  if (digitalRead(buttonBPin) == LOW) {
    playMorseCode(morseCodeLetters[1]); // Písmeno B
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[2]); // Písmeno C
    delay(200);
  }

  if (digitalRead(buttonDPin) == LOW) {
    playMorseCode(morseCodeLetters[3]); // Písmeno D
    delay(200);
  }

  if (digitalRead(buttonEPin) == LOW) {
    playMorseCode(morseCodeLetters[4]); // Písmeno E
    delay(200);
  }

  if (digitalRead(buttonFPin) == LOW) {
    playMorseCode(morseCodeLetters[5]); // Písmeno F
    delay(200);
  }

  if (digitalRead(buttonGPin) == LOW) {
    playMorseCode(morseCodeLetters[6]); // Písmeno G
    delay(200);
  }

  if (digitalRead(buttonHPin) == LOW) {
    playMorseCode(morseCodeLetters[7]); // Písmeno H
    delay(200);
  }

  if (digitalRead(buttonIPin) == LOW) {
    playMorseCode(morseCodeLetters[8]); // Písmeno I
    delay(200);
  }

  if (digitalRead(buttonJPin) == LOW) {
    playMorseCode(morseCodeLetters[9]); // Písmeno I
    delay(200);
  }

  if (digitalRead(buttonKPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno J
    delay(200);
  }

  if (digitalRead(buttonLPin) == LOW) {
    playMorseCode(morseCodeLetters[21]); // Písmeno K
    delay(200);
  }

  if (digitalRead(buttonMPin) == LOW) {
    playMorseCode(morseCodeLetters[22]); // Písmeno L
    delay(200);
  }

  if (digitalRead(buttonNPin) == LOW) {
    playMorseCode(morseCodeLetters[23]); // Písmeno M
    delay(200);
  }

  if (digitalRead(buttonOPin) == LOW) {
    playMorseCode(morseCodeLetters[24]); // Písmeno N
    delay(200);
  }

  if (digitalRead(buttonPPin) == LOW) {
    playMorseCode(morseCodeLetters[25]); // Písmeno O
    delay(200);
  }

  if (digitalRead(buttonQPin) == LOW) {
    playMorseCode(morseCodeLetters[26]); // Písmeno P
    delay(200);
  }

  if (digitalRead(buttonRPin) == LOW) {
    playMorseCode(morseCodeLetters[27]); // Písmeno Q
    delay(200);
  }

  if (digitalRead(buttonSPin) == LOW) {
    playMorseCode(morseCodeLetters[28]); // Písmeno R
    delay(200);
  }

  if (digitalRead(buttonTPin) == LOW) {
    playMorseCode(morseCodeLetters[29]); // Písmeno S
    delay(200);
  }

  if (digitalRead(buttonUPin) == LOW) {
    playMorseCode(morseCodeLetters[30]); // Písmeno T
    delay(200);
  }

  if (digitalRead(buttonVPin) == LOW) {
    playMorseCode(morseCodeLetters[31]); // Písmeno U
    delay(200);
  }

  if (digitalRead(buttonWPin) == LOW) {
    playMorseCode(morseCodeLetters[32]); // Písmeno V
    delay(200);
  }

  if (digitalRead(buttonXPin) == LOW) {
    playMorseCode(morseCodeLetters[33]); // Písmeno W
    delay(200);
  }

  if (digitalRead(buttonYPin) == LOW) {
    playMorseCode(morseCodeLetters[34]); // Písmeno X
    delay(200);
  }

  if (digitalRead(buttonZPin) == LOW) {
    playMorseCode(morseCodeLetters[36]); // Písmeno Y
    delay(200);
  }

/* asi zle
  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno Z
    delay(200);
  }
*/

  if (digitalRead(button0Pin) == LOW) {
    playMorseCode(morseCodeLetters[37]); // Cislo 0
    delay(200);
  }

  if (digitalRead(button1Pin) == LOW) {
    playMorseCode(morseCodeLetters[38]); // Cislo 1
    delay(200);
  }

  if (digitalRead(button2Pin) == LOW) {
    playMorseCode(morseCodeLetters[39]); // Cislo 2
    delay(200);
  }

  if (digitalRead(button3Pin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Cislo 3
    delay(200);
  }

  if (digitalRead(button4Pin) == LOW) {
    playMorseCode(morseCodeLetters[40]); // Cislo 4
    delay(200);
  }

  if (digitalRead(button5Pin) == LOW) {
    playMorseCode(morseCodeLetters[41]); // Cislo 5
    delay(200);
  }

  if (digitalRead(button6Pin) == LOW) {
    playMorseCode(morseCodeLetters[42]); // Cislo 6
    delay(200);
  }

  if (digitalRead(button7Pin) == LOW) {
    playMorseCode(morseCodeLetters[43]); // Písmeno 7
    delay(200);
  }

  if (digitalRead(button8Pin) == LOW) {
    playMorseCode(morseCodeLetters[44]); // Písmeno 8
    delay(200);
  }

  if (digitalRead(button9Pin) == LOW) {
    playMorseCode(morseCodeLetters[45]); // Písmeno 9
    delay(200);
  }
}

void playMorseCode(const char* morse) {
  for (int i = 0; morse[i] != '\0'; i++) {
    if (morse[i] == '.') {
      tone(buzzerPin, 1000, 100);
    } else if (morse[i] == '-') {
      tone(buzzerPin, 1000, 300);
    }
    delay(400);
    noTone(buzzerPin);
    delay(400);
  }
}
