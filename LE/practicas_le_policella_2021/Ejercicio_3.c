#include <stdio.h>
#include <math.h>

float n;
int numeros_positivos=0;
int numeros_negativos=0;

int main() {
    for (int i=0; i<10; i++) {
        printf ("ingrese sus numeros uno a la vez:\n");
        scanf ("%f", &n);
        if (n<0){
            numeros_negativos++;
        }
        else if (n>0){
            numeros_positivos++;
        }
    }
    printf ("son %d numeros positivos, son %d numeros negativos", numeros_positivos, numeros_negativos);
    getch ();
}