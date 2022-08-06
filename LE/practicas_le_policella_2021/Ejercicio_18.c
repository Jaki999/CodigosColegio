#include <stdio.h>
#include <math.h>

int numero;
int suma;

main () {
    printf ("ingrese su numero entero:\n");
    scanf ("%d", &numero);
    for (int i=1; i<=numero; i++) {
        suma += i;
    }
    printf ("%d", suma);
}