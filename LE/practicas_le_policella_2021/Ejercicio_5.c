#include <stdio.h>
#include <math.h>

float B;
float H;

#define R B*H/2

int main () {
    printf ("ingrese su base\n");
    scanf ("%f", &B);
    printf ("ingrese su altura\n");
    scanf ("%f", &H);

    printf ("su superficie es: %f", R);

}