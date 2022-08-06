#include <stdio.h>
#include <math.h>

float numero1;
float numero2;
float numero3;
float numero4;
float numero5;

int main() {
    printf("ingrese su primer numero: ");
    scanf ("%f", &numero1);
     printf("ingrese su segundo numero: ");
    scanf ("%f", &numero2);
     printf("ingrese su tercer numero: ");
    scanf ("%f", &numero3);
     printf("ingrese su cuarto numero: ");
    scanf ("%f", &numero4);
     printf("ingrese su quinto numero: ");
    scanf ("%f", &numero5);
   
    float resultado_suma = numero1+numero2+numero3+numero4+numero5;
    float resultado_final = resultado_suma/5;
    printf ("su resultado es: ");
    printf("%f", resultado_final);
}