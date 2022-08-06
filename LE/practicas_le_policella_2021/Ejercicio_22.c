#include <stdio.h>
#include <math.h>

float R;
float J;

#define M sqrt(R*R+J*J)
#define A (atan(J/R))*180/M_PI

int main (){
    printf ("Ingrese la parte real de su numero: ");
    scanf ("%f", &R);

    printf ("Ingrese la parte imaginaria de su numero: ");
    scanf ("%f", &J);

    printf ("su modulo es: %f\n", M);
    printf ("su fase es: %f", A);

}