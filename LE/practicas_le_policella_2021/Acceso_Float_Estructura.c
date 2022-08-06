#include <stdio.h>

struct autos{
    char marca[50];
    char modelo[50];
    float kilometraje;
}automovil;

//prototipo
void data();

int main(){
    data();
}

void data(void){
    //registro de datos
    printf("\ningrese la marca de su auto: ");
    scanf("%s", automovil.marca);
    printf("\ningrese el modelo de su auto: ");
    scanf("%s", automovil.modelo);
    printf("\ningrese el kilometraje de su auto: ");
    scanf("%f", &automovil.kilometraje);
    //presentacion del registro de datos en pantalla
    printf("\nel auto marca %s modelo %s, tiene %f kilometros", automovil.marca, automovil.modelo, automovil.kilometraje);
  
}


