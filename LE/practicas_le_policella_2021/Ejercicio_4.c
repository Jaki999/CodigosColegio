#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

float R;

#define D R*2
#define A M_PI*R*R
#define C M_PI*D

int main () {
    printf ("ingrese su radio:\n");
    scanf ("%f", &R);
    printf ("su area es: %f\n", A);
    printf ("su circunferencia es: %f\n", C);
    getch ();
    
}