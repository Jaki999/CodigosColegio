#include <stdio.h>

int main () {
    printf ("multiplos de 3: ");
    for (int i = 3; i < 100; i += 3) {
      printf (" %d,", i);
    }
   
    printf ("\nmultiplos de 2: ");
    for (int x = 2; x < 100; x += 2) {
      printf (" %d,", x);
    }
}