// Piny pre tlačidlá pre písmená

const int buttonAPin = 2; // A
const int buttonBPin = 3; // A
const int buttonCPin = 4; // A

const int buttonAPin = 5; // A
const int buttonBPin = 6; // A
const int buttonCPin = 7; // A
const int buttonAPin = 8; // A
const int buttonBPin = 9; // A
const int buttonCPin = 10; // A
const int buttonAPin = 22; // A
const int buttonBPin = 23; // A
const int buttonCPin = 24; // A
const int buttonAPin = 25; // A
const int buttonBPin = 26; // A
const int buttonCPin = 27; // A
const int buttonCPin = 29; // A
const int buttonCPin = 30; // A
const int buttonCPin = 31; // A
const int buttonCPin = 32; // A
const int buttonCPin = 33; // A
const int buttonCPin = 34; // A
const int buttonCPin = 35; // A
const int buttonCPin = 36; // A
const int buttonCPin = 37; // A
const int buttonCPin = 38; // A
const int buttonCPin = 39; // A

// Piny pre tlačidlá pre písmená

const int button0Pin = 40; // 0
const int button2Pin = 41; // 1
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




  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[3]); // Písmeno D
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[4]); // Písmeno E
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[5]); // Písmeno F
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[6]); // Písmeno G
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[7]); // Písmeno H
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[8]); // Písmeno H
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[9]); // Písmeno I
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno J
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno K
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno L
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno M
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno N
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno O
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno P
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno Q
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno R
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno S
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno T
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno U
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno V
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno W
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno X
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno Y
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno Z
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Cislo 0
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Cislo 1
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Cislo 2
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Cislo 3
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Cislo 4
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Cislo 5
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Cislo 6
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno 7
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno 8
    delay(200);
  }

  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCodeLetters[10]); // Písmeno 9
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
