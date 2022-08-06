#include <stdio.h>
#include <math.h>

float M;
float F;



#define Re M*cos(F) 
#define Im M*sin(F)

int main (){
    printf ("Ingrese el modulo de su numero: ");
    scanf ("%f", &M);

    printf ("Ingrese la fase de su numero: ");
    scanf ("%f", &F);

    printf ("%f+j%f", Re, Im);
    
}