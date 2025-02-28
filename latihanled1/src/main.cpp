#include <Arduino.h>  
// Definisi pin untuk LED
int redLED = 33;
int yellowLED = 26;
int greenLED = 25;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // Lampu merah menyala selama 5 detik
  digitalWrite(redLED, HIGH);
  delay(10000);
  digitalWrite(redLED, LOW);
  
  // Lampu hijau menyala selama 4 detik
  digitalWrite(greenLED, HIGH);
  delay(10000);
  digitalWrite(greenLED, LOW);
  
  // Lampu kuning menyala selama 2 detik
  digitalWrite(yellowLED, HIGH);
  delay(5000);
  digitalWrite(yellowLED, LOW);
}
