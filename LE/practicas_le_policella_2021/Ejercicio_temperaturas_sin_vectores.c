#include <stdio.h>
#include <math.h>

int i;
int temperatura;
int mayor10=0;
int menor20=0;
int minimo;
int maximo;
int c=0;

int contador;
int sumat;

//promedio de las temperaturas
#define promedio sumat/contador

int main () {
    do {
        //ingreso de valores de temperatura
        printf ("ingrese su valor de temperatura en grados celsius: ");
        scanf ("%d", &temperatura);
        
        //con el primer valor ingresado se establece los maximos y minimos
        if (c==0) {
            maximo=temperatura;
            minimo=temperatura;
        }
        c=1;
        
        //registro de datos para el promedio
        contador+=1;
        sumat+=temperatura;
        
        //se establecen nuevos maximos y minimos en caso de ser necesario para las temperaturas nuevas
        if (temperatura<minimo) minimo=temperatura;
        if (temperatura>maximo) maximo=temperatura;
        //se registra las temperaturas mayores y menores a 20 grados
        if (temperatura>10) mayor10++;
        if (temperatura<20) menor20++;

        //se pregunta al usuario si desea ingresar mas valores, de lo contrario se muestra en pantalla la informacion precisada
        printf ("si desea ingresar otro valor coloque 1 por lo contrario coloque 0: ");
        scanf ("%d", &i);
    } while (i==1);
    printf ("\nmayores a 10: %d, menores a 20: %d", mayor10, menor20);
    printf ("\nvalor maximo: %d", maximo);
    printf ("\nvalor minimo: %d", minimo);
    printf ("\nsu promedio es: %d", promedio);
    return 0;
}   