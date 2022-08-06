#include <stdio.h>
#include <math.h>

char l;
int ca=0;
int ce=0;
int ci=0;
int co=0;
int cu=0;

int main () {

    for (int i=0; i<20; i++) {
        printf ("ingrese sus caracteres uno a la vez:\n");
        scanf (" %c", &l);

        if (l == 'a') ca++;
        if (l == 'e') ce++; 
        if (l == 'i') ci++; 
        if (l == 'o') co++; 
        if (l == 'u') cu++; 
    }
    printf ("se ingresaron %d a\nse ingresaron %d e\nse ingresaron %d i\nse ingresaron %d o\nse ingresaron %d u", ca, ce, ci, co, cu);
}