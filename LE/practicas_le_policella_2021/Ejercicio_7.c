#include <stdio.h>
#include <math.h>

int N;

int main () {
    printf ("ingrese su numero\n");
    scanf ("%d", &N);

    if (N % 2 ==0) {
       printf ("su numero es par\n");
    }
    else {
       printf ("su numero es inpar\n");
    }
    getch ();
}