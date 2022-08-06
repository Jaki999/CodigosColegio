#include <stdio.h>
#include <math.h>

int i;

float A1;
float B1;
float A2;
float B2;

#define resultadoA A1+A2
#define resultadoB B1+B2

#define M sqrt(pow(resultadoA, 2)+pow(resultadoB, 2))
#define A atan(B1+B2/A1+A2)
#define Ag A*(180/M_PI)

int main (){
    
    printf ("\ningrese el valor de A del primer numero complejo: ");
    scanf ("%f", &A1);
    printf ("\ningrese el valor de B del primer numero complejo: ");
    scanf ("%f", &B1);
    printf ("\ningrese el valor de A del segundo numero complejo: ");
    scanf ("%f", &A2);
    printf ("\ningrese el valor de B del segundo numero complejo: ");
    scanf ("%f", &B2);

    printf ("\ningrese \"0\" si quiere ver el resultado en forma rectangular, si lo quiere ver de forma polar ingrese\"1\"\n");
    scanf ("%d", &i);
    if (i==0) printf ("su valor es: %f+J%f", resultadoA, resultadoB);
    if (i==1) printf ("su valor es; %f//%f", M, Ag);
}
