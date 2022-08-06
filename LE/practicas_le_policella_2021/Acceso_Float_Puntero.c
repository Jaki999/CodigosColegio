#include <stdio.h>

//variable a la que le ingresaremos el valor
float v;
//se establece un puntero para el lugar en la memoria de la  variable antes ingresada
int* valormem= &v;

//prototipo
int out (float* x);

int main() {
    //se le pide al usuario el ingreso de un valor
    printf("\ningrese su valor: ");
    scanf("%f", &v);
    //se muestra en pantalla el lugar en memoria del valor
    printf ("\nsu valor en memoria es: %u", valormem);
    //funcion para imprimir el valor accediendo con un puntero
    out (&v);
    return 0;
}

int out (float* x){
    printf ("\nsu valor es: %f", *x);
    return 0;
}