#include <stdio.h>
#include <math.h>

//vector donde se almacenaran los valores de temperatura
float temperatura [256]={};

int contador;
float sumat;
float minimo;
float maximo;
int mayor10=0;
int menor20=0;

//promedio de las temperaturas
#define promedio sumat/contador

int main (){
  //se le pide al usuario cuantos valores quiere ingresar
  printf("\ncuantos valores de temperatura desea ingresar: ");
  scanf("%d", &contador);
  
  
  for (int z = 0; z < contador; z++) {
    //con el contador se le pide al usuario que ingrese cuantos valores anuncio antes
    printf("\ningrese su valor de temperatura en grados celsius: ");
    scanf ("%f", &temperatura[z]);  
    //se van sumando los valores ingresados
    sumat +=temperatura[z];
    
    //con el primer valor ingresado se establece los maximos y minimos
    if (z==0) {
      maximo=temperatura[z];
      minimo=temperatura[z];
    }
    
    //se establecen nuevos maximos y minimos en caso de ser necesario para las temperaturas nuevas
    if (temperatura[z]<minimo) minimo=temperatura[z];
    if (temperatura[z]>maximo) maximo=temperatura[z];
    //se registra las temperaturas mayores y menores a 20 grados
    if (temperatura[z]>10) mayor10++;
    if (temperatura[z]<20) menor20++;
  }
  //se le muestra al usuario la informacion precisada
  printf ("\nmayores a 10: %d, menores a 20: %d", mayor10, menor20);
  printf ("\nvalor maximo: %f", maximo);  
  printf ("\nvalor minimo: %f", minimo);
  printf ("\nsu promedio es: %f", promedio);
  
  return 0;
    
}