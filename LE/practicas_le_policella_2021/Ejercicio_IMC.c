#include <stdio.h>
#include <math.h>

//cuenta para el imc
#define imc user.kg/(user.hg*user.hg)

//datos de usuario
struct person{
    float kg;
    float hg;
    char name[100];
    char surname[100];
    char dni[256];
    char mail[256];
    char num[256];
}user;

char check(char ingreso[256]); //prototipo
void datos(); //prototipo
void analisis(); //prototipo

int main() {
    datos();
    analisis();
}

char check(char ingreso[256]){
    int com=0;
    int arroba=0;
    //chequeo del '@' y del '.com'
    for (int i=0; i<256; i++){
        if (ingreso[i]=='@') arroba++;
        if (ingreso[i]=='.' && ingreso[i+1]=='c' && ingreso[i+2]=='o' && ingreso[i+3]=='m') com++;
    }
    if (arroba==1 && com==1) return 1;
    else return 0;
    
}

void datos(){
    //ingreso de informacion del usuario
    printf("\ningrese su nombre: ");
    scanf("%s", &user.name);
    printf("\ningrese su apellido: ");
    scanf("%s", &user.surname);
    printf("\ningrese su DNI: ");
    scanf("%s", &user.dni);
    printf("\ningrese su numero de telefono: ");
    scanf("%s", &user.num);

    printf("\ningrese su e-mail: ");
    scanf("%s", &user.mail);
    
    //si el mail que ingreso el usuario no es valido la funcion "check" devuelve 0 por lo tanto se le vuelve a pedir su mail
    while (!check(user.mail)) {
        printf ("\nsu mail no es valido, por favor ingreselos de nuevo: ");
        scanf("%s", &user.mail);
    }
    
    printf("\ningrese su peso en kilogramos: ");
    scanf("%f", &user.kg);
    printf("\ningrese su altura en metros: ");
    scanf("%f", &user.hg);
}

void analisis(){
    //indicador de en que situacion de peso se encuentra el usuario
    printf ("\npara el usuario de nombre %s %s", user.name, user.surname);
    printf ("\ndni: %s", user.dni);
    printf ("\nemail: %s", user.mail);
    printf ("\ntelefono: %s", user.num);
    
    printf("\nsu indice de masa corporal (IMC) es: %f", imc);
   
    if (imc<18.5) printf("\nusted tiene un peso inferior al normal");
    if (imc>=18.5 && imc<=24.9) printf("\nusted tiene un peso normal");
    if (imc>=25 && imc<=29.9) printf("\nusted tiene un peso superior al normal");
    if (imc>=30) printf("\nusted tiene obesidad");
}