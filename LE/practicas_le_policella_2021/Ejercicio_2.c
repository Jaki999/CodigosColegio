#include <stdio.h>
#include <math.h>

float numero;
float resultado;

int main() {
    printf ("ingrese su numero por favor: ");
    scanf ("%f", &numero);
   
    if (numero<=0){
    printf ("ERROR, el número debe ser mayor que cero");
    }
    else{
     resultado=numero*numero;
     printf ("su resultado es: %f", resultado );
    }
}