int speakerPin = 2;

int length = 15; // the number of notes
char notes[] = "ccggaagffeeddc "; // a space represents a rest
int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };
int tempo = 300;

void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };

  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

void setup() {
  pinMode(speakerPin, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  
}

void loop() {
  if (digitalRead(4)){
    playTone(250,1);
  }else if (digitalRead(5)){
    playTone(400,1);
  }else if (digitalRead(6)){
    playTone(430,1);
  }else if (digitalRead(7)){
    playTone(450,1);
  }else if (digitalRead(8)){
    playTone(150,1);
  }else if (digitalRead(9)){
    playTone(500,1);
  }else if (digitalRead(10)){
    playTone(200,1);
  }else if (digitalRead(11)){
    playTone(2000 ,1);
  }else if (digitalRead(12)){
    playTone(220 ,1);
  }
}

