#include <stdio.h>
#include <math.h>

float N; 

int main () {
    for (; ;) {
        printf ("\ningrese su numero\n");
        scanf ("%f", &N);
        if (N<0) {
            printf ("su numero es negativo");
        }
        else if (N>0) {
            printf ("su numero es positivo");
        }
    }

}