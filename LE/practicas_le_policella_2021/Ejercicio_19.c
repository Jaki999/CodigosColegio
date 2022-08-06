#include <stdio.h>
#include <math.h>

int numero;

int main () {
    printf ("ingrese su numero entero:\n");
    scanf ("%d", &numero);
    for (int i=0; i<=numero; i++) {
     printf("%d\n", i);
    }
}