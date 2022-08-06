#include <stdio.h>
#include <math.h>

float C;

#define F (C*9/5)+32

int main () {
    
    printf ("ingrese su valor en celsius\n");
    scanf ("%f", &C);

    printf ("%f grados Celsius son %f grados Fahrenheit", C, F);
    
}