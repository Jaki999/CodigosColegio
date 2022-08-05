// https://www.arduino.cc/reference/en/language/functions/communication/serial/
// Esta es el dato que debo transmitir: 0b10101010
// Emplearemos una comunicación serie asincrónica 8N1 a 9600.
// UART <3

#include <Arduino.h>

#define TX 8
#define TIEMPO_BIT 104 // Valor expresado en microsegundos.
#define DATA 0b10110011

void setup()
{
  // put your setup code here, to run once:
  // Serial.begin(9600, SERIAL_8N1);
  Serial.begin(9600, SERIAL_8N1);
}

void loop()
{
  // put your main code here, to run repeatedly:
  Serial.write(DATA);
  delay(10);
}