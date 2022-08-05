#include <Arduino.h>

#define TIEMPOBIT 104
#define TX 4              // Pin número 4.

float tiempoBit = 104.16; 

char informacion = 0b10101010;

void setup() {
  // put your setup code here, to run once:
  pinMode(TX, OUTPUT);
  digitalWrite(TX, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  TX_dato_1(informacion);
}

void TX_dato_1 (unsigned char dato)
{
  // Bit de Start
  digitalWrite(TX, LOW);
  delayMicroseconds(TIEMPOBIT);

  // Dato de 8 bits
  for(char i = 0; i < 8; i++)
  {
    bool bit = bitRead(dato, i);
    digitalWrite(TX, bit);   
    delayMicroseconds(TIEMPOBIT);
  }

  // Bit de Stop
  digitalWrite(TX, HIGH);
  delayMicroseconds(TIEMPOBIT);
}

void TX_dato_2 (unsigned char dato)
{
  // Bit de Start
  digitalWrite(TX, LOW);
  delayMicroseconds(TIEMPOBIT);

  // Dato de 8 bits
  for(int i = 0; i < 8; i++)
  {
    bool bit = dato & (1<<i);
    digitalWrite(TX, bit);
    delayMicroseconds(TIEMPOBIT);
  } 

  // Bit de Stop
  digitalWrite(TX, HIGH);
  delayMicroseconds(TIEMPOBIT);
}