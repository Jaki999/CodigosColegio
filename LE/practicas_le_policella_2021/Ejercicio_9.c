#include <stdio.h>
#include <math.h>

float centimetros;

#define pies centimetros/30.48
#define pulgada centimetros/2.54

int main () {
    printf ("ingrese su valor en centimetros\n");
    scanf ("%f", &centimetros);

    printf ("su valor en centimetros es: %f\n", centimetros);
    printf ("su valor en pies es: %f\n", pies);
    printf ("su valor en pulgadas es: %f", pulgada);

}