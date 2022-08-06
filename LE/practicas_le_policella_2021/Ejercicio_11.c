#include <stdio.h>
#include <math.h>

int in;

int main () {

    do {
        printf ("ingrese el numero del dia de la semana que quiere saber, si quiere cerrar el programa ingrese \"0\"\n");
        scanf (" %d", &in);
        if (in==1) printf ("su dia es domingo\n");
        else if (in==2) printf ("su dia es lunes\n");
        else if (in==3) printf ("su dia es martes\n");
        else if (in==4) printf ("su dia es miercoles\n");
        else if (in==5) printf ("su dia es jueves\n");
        else if (in==6) printf ("su dia es viernes\n");
        else if (in==7) printf ("su dia es sabado\n"); 
    } while (in);
}