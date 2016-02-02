//Author: Telliotword

#define   LED_1   6
#define   LED_2   10
#define   LED_3   11
#define   SPEAKER 5
#define NOTE_G1  49
#define NOTE_B1  62
#define NOTE_A1  55

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode (SPEAKER, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_1, HIGH);
  tone(SPEAKER, NOTE_B1); 
  delay(500);
  noTone(SPEAKER);
  digitalWrite(LED_1, LOW);
  delay(150);
  digitalWrite(LED_2, HIGH);
  tone(SPEAKER, NOTE_A1); 
  delay(500);
  noTone(SPEAKER);
  digitalWrite(LED_2, LOW);
  delay(150);
  digitalWrite(LED_3, HIGH);
  tone(SPEAKER, NOTE_G1); 
  delay(500);
  noTone(SPEAKER);
  digitalWrite(LED_3, LOW);
  delay(150);
  digitalWrite(LED_1, HIGH);
  tone(SPEAKER, NOTE_B1); 
  delay(500);
  noTone(SPEAKER);
  digitalWrite(LED_1, LOW);
  delay(150);
  digitalWrite(LED_2, HIGH);
  tone(SPEAKER, NOTE_A1); 
  delay(500);
  noTone(SPEAKER);
  digitalWrite(LED_2, LOW);
  delay(150);
  digitalWrite(LED_3, HIGH);
  tone(SPEAKER, NOTE_G1); 
  delay(500);
  noTone(SPEAKER);
  digitalWrite(LED_3, LOW);
  delay(150); 
  digitalWrite(LED_3,HIGH);
  tone(SPEAKER, NOTE_G1); 
  delay(150);
  noTone(SPEAKER);
  digitalWrite(LED_3, LOW);
  delay(100);
  digitalWrite(LED_3, HIGH);
  tone(SPEAKER, NOTE_G1); 
  delay(150);
  noTone(SPEAKER);
  digitalWrite(LED_3, LOW);
  delay(100);
  digitalWrite(LED_3, HIGH);
  tone(SPEAKER, NOTE_G1); 
  delay(150);
  noTone(SPEAKER);
  digitalWrite(LED_3, LOW);
  delay(100);
  digitalWrite(LED_3, HIGH);
  tone(SPEAKER, NOTE_G1);  
  delay(150);
  noTone(SPEAKER);
  digitalWrite(LED_3, LOW);
  delay(100);
  digitalWrite(LED_2, HIGH);
  tone(SPEAKER, NOTE_A1); 
  delay(150);
  noTone(SPEAKER);
  digitalWrite(LED_2, LOW);
  delay(100);
  digitalWrite(LED_2, HIGH);
  tone(SPEAKER, NOTE_A1); 
  delay(150);
  noTone(SPEAKER);
  digitalWrite(LED_2, LOW);
  delay(100);
  digitalWrite(LED_2, HIGH);
  tone(SPEAKER, NOTE_A1); 
  delay(150);
  noTone(SPEAKER);
  digitalWrite(LED_2, LOW);
  delay(100);  
  digitalWrite(LED_2,HIGH);
  tone(SPEAKER, NOTE_A1); 
  delay(150);
  noTone(SPEAKER);
  digitalWrite(LED_2, LOW);
  delay(100);
  digitalWrite(LED_1, HIGH);
  tone(SPEAKER, NOTE_B1); 
  delay(500);
  noTone(SPEAKER);
  digitalWrite(LED_1, LOW);
  delay(150);
  digitalWrite(LED_2, HIGH);
  tone(SPEAKER, NOTE_A1); 
  delay(500);
  noTone(SPEAKER);
  digitalWrite(LED_2, LOW);
  delay(150);
  digitalWrite(LED_3, HIGH);
  tone(SPEAKER, NOTE_G1); 
  delay(500);
  noTone(SPEAKER);
  digitalWrite(LED_3, LOW);
  delay(150);  
}
