#include <stdio.h>
#include <math.h>

int numero;
int cantidad=0;
int x;

int main () {
    printf ("ingrese su numero entero:\n");
    scanf ("%d", &numero);
    for (int i=1; i<numero; i+=3) {
     cantidad+=1;
    }
    printf ("\nhay %d multiplos de 3",cantidad);
}