#include <stdio.h>
#include <math.h>

int total=0;

int main () {
    for (int i=1; i<100; i+=2) {
        printf ("%d, ", i);
        total++;
    }
    printf ("\nen total son %d numeros inpares",total);
}