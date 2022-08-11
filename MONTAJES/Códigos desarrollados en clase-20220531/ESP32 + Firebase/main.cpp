#include <Arduino.h>
#include <WiFi.h>
#include <FirebaseESP32.h>

#define SSID "ETRR Free"
#define PASSWORD ""

#define API_KEY "8CrtaP2bVpp2EDu8lBatSs7yUKWk2QUKYTbgwnCq"
#define DATABASE_URL "https://ejemplo1723-default-rtdb.firebaseio.com/"

// Define Firebase Data object
FirebaseData fbdo;
FirebaseConfig config;

bool flag_conectado = false;
int contador_segundos;

bool valor = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Bienvenido a la consola de pruebas...");

  WiFi.begin(SSID, PASSWORD);
  
  while((WiFi.status() != WL_CONNECTED) && (!flag_conectado)){
    delay(1000);
    Serial.println(contador_segundos);
    contador_segundos ++;
    if (contador_segundos == 60) flag_conectado = true; // Coloco esta condición como timeout = 2s, para que en caso de que no se pueda conectar pueda salir del lazo del while.
  }

  if(WiFi.status() == WL_CONNECTED){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else{
    digitalWrite(LED_BUILTIN, LOW);
  }

  Serial.printf("Firebase Client v%s\n\n", FIREBASE_CLIENT_VERSION);

  /* Assign the api key (required) */
  config.api_key = API_KEY;

  /* Assign the RTDB URL (required) */
  config.database_url = DATABASE_URL;

  Firebase.begin(DATABASE_URL, API_KEY);
  // Comment or pass false value when WiFi reconnection will control by your code or third party library
  Firebase.reconnectWiFi(true);
  Firebase.setDoubleDigits(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool operacion = Firebase.setString(fbdo, "/emanuel", "Hola 6to. TEL, ¿cómo están?");
  Serial.println(operacion);
}