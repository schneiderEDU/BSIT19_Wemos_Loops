#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  
  //for-Schleife (Zählschleife)
  Serial.println("\nfor-Schleife:");
  for(int i = 0; i <= 9; i++) {
    Serial.println(i);
  }
  
  //while-Schleife (kopfgesteuerte Schleife - wird 0 bis n-mal ausgeführt)
  Serial.println("\nwhile-Schleife:");
  int i = 10;
  while(i <= 19) {
    Serial.println(i);
    i++;
  }
  //i = 20
  //do-while-Schleife (fußgesteuerte Schleife - wird 1 bis n-mal ausgeführt)
  Serial.println("\ndo-while-Schleife:");
  do {
    Serial.println(i);
    i++;
  } while(i <= 29);
  Serial.print("\n\ni = ");
  Serial.print(i);
}

void loop() {
  

}