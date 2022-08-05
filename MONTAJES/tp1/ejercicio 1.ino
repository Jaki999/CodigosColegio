#include <arduino.h>

//Definimos los pines del sensor y del puente h. Tambien definimos los estados para nuestro programa
#define AVANZANDO 1
#define FRENADO 0
#define MEDIR 2
#define ena 6
#define enb 11
#define in1 7
#define in2 8
#define in3 9
#define in4 10
#define trigPin 3
#define echoPin 2
#define ledPin 12

//establecemos nuestro estado de inicio
char estado = AVANZANDO;
//establecemos la variable que almacena la distancia medida por el sensor
float distancia;

//prototipos de nuestras funciones
void control(int velocidad1, int velocidad2);
float medir_distancia(void);

//La funcion control nos permite controlar la velocidad de cada motor por separado pasandole como parametros las velocidades de -255 a 255, negativo para retroceder, positivo para avanzar
void control(int velocidad1, int velocidad2){ 

    bool sentido1 = true;
    bool sentido2 = true;

    //si el parametro de la velocidad para el primer motor es negativa (menor a 0)
    if(velocidad1 < 0){ 
        //el sentido del primer motor va a ser false para que retroceda
        sentido1 = false; 
        //pasamos la velocidad a positivo para usarla despues
        velocidad1 = -1 * velocidad1; 
  }

    //lo mismo para el motor 2
    if(velocidad2 < 0){ 
    sentido2 = false;
    velocidad2 = -1 * velocidad2;  
  }
 
    //enviamos a los enable de el motor 1 y 2 el valor analogico la velocidad de cada uno respectivamente
    analogWrite(ena, velocidad1);
    analogWrite(enb, velocidad2);

    //enviamos a ambos motores los sentidos que van a tener, siempre los sentidos en un mismo motor van a ser diferentes, entonces usamos una sola variable y la negamos
    digitalWrite(in1, sentido1);
    digitalWrite(in2, !sentido1);

    digitalWrite(in3, sentido2);
    digitalWrite(in4, !sentido2);
}

//para medir la distancia con el sensor de ultrasonido creamos la funcion medir_distancia
float medir_distancia(void) { 

    //primero enviamos al pin del trigger una señal high por 10 microsegundos para que el sensor de ultrasonido emita una señal por 10 microsegundos
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    //luego, medimos el tiempo que tarda en llegar el eco de la señal emitida con la funcion pulseIn()
    long duracion = pulseIn(echoPin, HIGH);
    //por ultimo para calcular la distancia 
    float distancia = duracion/59;

    return distancia;
}

void setup() {
    //establecemos los modos de los pines
    pinMode(ledPin, OUTPUT);
    pinMode(ena, OUTPUT);
    pinMode(enb, OUTPUT);

    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);

    //declaramos el pin del trigger como output ya que es el encargado de enviar la señal
    pinMode(trigPin, OUTPUT); 
    //declaramos el pin del trigger como input ya que es el encargado de recibir el eco la señal
    pinMode(echoPin, INPUT);  
    //incializamos el trigger como low
    digitalWrite(trigPin, LOW); 
}

void loop() {
    //establecemos los modos de los pines
    switch (estado)
    {
        //establecemos que sucede en el caso AVANZANDO    
        case AVANZANDO:
            digitalWrite(ledPin, 0);
            control(-180, -180);
            estado = MEDIR;
        break;
        //establecemos que sucede en el caso FRENADO
        case FRENADO:
            digitalWrite(ledPin, 1);
            control(0, 0);
            estado = MEDIR;
        break;
        //establecemos que sucede en el caso MEDIR
        case MEDIR:
            distancia = medir_distancia();
            if (distancia < 25) estado = FRENADO;
            else estado = AVANZANDO;
        break;
   
        default:
        break;
    }

}