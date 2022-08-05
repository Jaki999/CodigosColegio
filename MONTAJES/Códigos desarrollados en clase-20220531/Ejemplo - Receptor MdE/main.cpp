// Ejemplo del receptor - 19/05/2022
#include <Arduino.h>

#define DEFAULT  0
#define ESTADO_H 1
#define ESTADO_O 2
#define ESTADO_L 3
#define ESTADO_A 4

#define LED 3

char byte; 
int estado = DEFAULT;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  switch (estado)
  {
    case DEFAULT:
      // https://www.arduino.cc/reference/es/language/functions/communication/serial/available/
      if(Serial.available() > 0){
        byte = Serial.read();
        Serial.println(byte);

        if((byte == 'H') || (byte == 'h')){
          estado = ESTADO_H;
        }        
      }
      break;
    
    case ESTADO_H:
      if(Serial.available() > 0){
        byte = Serial.read();
        Serial.println(byte);

        if((byte == 'O') || (byte == 'o')){
          estado = ESTADO_O;
        }
        else{
          estado = DEFAULT;
        }        
      }
      break;

    case ESTADO_O:
      if(Serial.available() > 0){
        byte = Serial.read();
        Serial.println(byte);

        if((byte == 'L') || (byte == 'l')){
          estado = ESTADO_L;
        }
        else{
          estado = DEFAULT;
        }        
      }
      break;

    case ESTADO_L:
      if(Serial.available() > 0){
        byte = Serial.read();
        Serial.println(byte);

        if((byte == 'A') || (byte == 'a')){
          estado = ESTADO_A;
        }
        else{
          estado = DEFAULT;
        }        
      }
      break;

    case ESTADO_A:
      digitalWrite(LED, HIGH);
      delay(2500);
      digitalWrite(LED, LOW);

      estado = DEFAULT;

      break;
  }
}