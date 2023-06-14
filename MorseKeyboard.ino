// Piny pre tlačidlá pre písmená
const int buttonAPin = 2;
const int buttonBPin = 3;
const int buttonCPin = 4;
// Pridaj ďalšie piny pre ďalšie tlačidlá

// Pin pre bzučiak
const int buzzerPin = 13;

// Morzeovský kód pre písmená
const char* morseCode[] = {
  ".-",   // A
  "-...", // B
  "-.-.", // C
  // Pridaj ďalšie morzeovské kódy pre ďalšie písmená
};

void setup() {
  // Nastavenie tlačidiel ako vstupov s pull-up odporom
  pinMode(buttonAPin, INPUT_PULLUP);
  pinMode(buttonBPin, INPUT_PULLUP);
  pinMode(buttonCPin, INPUT_PULLUP);
  // Nastav ďalšie piny tlačidiel ako vstupy s pull-up odporom

  // Nastavenie bzučiaka ako výstupu
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Kontrola tlačidla pre písmeno A
  if (digitalRead(buttonAPin) == LOW) {
    playMorseCode(morseCode[0]); // Morzeovský kód pre A
    delay(200); // Prestávka po stlačení tlačidla
  }
  
  // Kontrola tlačidla pre písmeno B
  if (digitalRead(buttonBPin) == LOW) {
    playMorseCode(morseCode[1]); // Morzeovský kód pre B
    delay(200); // Prestávka po stlačení tlačidla
  }
  
  // Kontrola tlačidla pre písmeno C
  if (digitalRead(buttonCPin) == LOW) {
    playMorseCode(morseCode[2]); // Morzeovský kód pre C
    delay(200); // Prestávka po stlačení tlačidla
  }

  // Pridaj kontrolu pre ďalšie tlačidlá a písmená abecedy

}

void playMorseCode(const char* morse) {
  for (int i = 0; morse[i] != '\0'; i++) {
    if (morse[i] == '.') {
      // Krátka dĺžka signálu
      tone(buzzerPin, 1000, 200);
      delay(400); // Oneskorí 400 ms
    } else if (morse[i] == '-') {
      // Dlhá dĺžka signálu
      tone(buzzerPin, 1000, 600);
      delay(400); // Oneskorí 400 ms
    }
    noTone(buzzerPin); // Vypnutie tónu
    delay(400); // Oneskorí 400 ms medzi pípnutiami
  }
}
