#include <Servo.h>

int led1 = 13;
int led2 = 12;
int led3 = 11;
int identificador = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  if (digitalRead(7) == HIGH) {
    
    delay(20); // Pausa para cambios de estado
    if (identificador == 0) {
      digitalWrite(led1, HIGH);
      delay(200);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      identificador += 1;
    } 
    else if (identificador == 1) {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      delay(200);
      digitalWrite(led3, LOW);
      identificador += 1;
    } 
    else if (identificador == 2) {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      delay(200);
      identificador = 0; // Reinicia para que el ciclo comience de nuevo
    }
  } 
  else {
    // Apagar todos los LEDs si el botón no está presionado
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}
