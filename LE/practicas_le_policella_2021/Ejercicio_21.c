#include <stdio.h>
#include <math.h>

int in[10];
int suma=0;
int producto=1;

int main () {

    for (int i=0; i<10; i++) {

        printf ("ingrese sus numeros por favor (no ingrese 0): ");
        scanf ("%d", &in[i]);

        if (in[i]>0) suma +=in[i];
        else if (in[i]<0) producto *=in[i];
    }

    printf ("su producto es: %d\n su suma es: %d", producto, suma);

}