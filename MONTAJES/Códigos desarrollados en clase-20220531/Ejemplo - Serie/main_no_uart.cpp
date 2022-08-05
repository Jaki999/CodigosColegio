// https://www.arduino.cc/reference/en/language/functions/communication/serial/
// Esta es el dato que debo transmitir: 0b10101010
// Emplearemos una comunicación serie asincrónica 8N1 a 9600.

#include <Arduino.h>

#define TX 8
#define TIEMPO_BIT 104 // Valor expresado en microsegundos.
#define DATA 0b10110011

void setup()
{
  // put your setup code here, to run once:
  pinMode(TX, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(TX, HIGH);
  delay(10);
  /* Bit de start */
  digitalWrite(TX, LOW);
  delayMicroseconds(TIEMPO_BIT);
  /* Comienzo del dato - Esta es el dato que debo transmitir: 0b10101010 */
  digitalWrite(TX, HIGH);
  delayMicroseconds(TIEMPO_BIT);
  digitalWrite(TX, LOW);
  delayMicroseconds(TIEMPO_BIT);
  digitalWrite(TX, HIGH);
  delayMicroseconds(TIEMPO_BIT);
  digitalWrite(TX, LOW);
  delayMicroseconds(TIEMPO_BIT);
  digitalWrite(TX, HIGH);
  delayMicroseconds(TIEMPO_BIT);
  digitalWrite(TX, LOW);
  delayMicroseconds(TIEMPO_BIT);
  digitalWrite(TX, HIGH);
  delayMicroseconds(TIEMPO_BIT);
  digitalWrite(TX, LOW);
  delayMicroseconds(TIEMPO_BIT);
  /* Bit de stop */
  digitalWrite(TX, HIGH);
  delayMicroseconds(TIEMPO_BIT);
}