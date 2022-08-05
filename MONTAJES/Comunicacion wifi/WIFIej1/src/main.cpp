#include <Arduino.h>
#include <WiFi.h>
#include <FirebaseESP32.h>

#define SSID "no jueguen al lol"
#define PASS "69420xxxx" 

#define API_KEY "AlzaSyCCDnQi_KXerV3_yeYv-V3xom03LWHILoM"
#define DATABASE_URL "https://prueba-26339-defaultrtdb.firebaseio.com"

//Define Firebase Data object
FirebaseData fbdo;
FirebaseConfig config;



bool flag_conectado = false;
int contador;
bool valor = 1;


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin (9600);
  WiFi.begin(SSID, PASS);
  
  while ((WiFi.status() != WL_CONNECTED) && (!flag_conectado)) {
    delay(1000);
    Serial.println (contador);
    contador ++;
    if (contador == 60) flag_conectado = true;
  }
  
  if(WiFi.status() == WL_CONNECTED){
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println ("Conectado");
  }
  else{
    digitalWrite(LED_BUILTIN, LOW);
  }

  Serial.printf ("Firebase Client v%s\n\n", FIREBASE_CLIENT_VERSION);

  /* Assign the api key (required) */
  config.api_key = API_KEY;
  /* Assign the RTDB URL (required) */
  config.database_url = DATABASE_URL;

  Firebase.begin(DATABASE_URL, API_KEY);
  // Comment or pass false value when WiFi reconnection will control by your code or third party library
  Firebase.reconnectWiFi(true);
  Firebase.setDoubleDigits(5);

}

void loop (){
  bool operacion = Firebase.setBool(fbdo, "/prueba", valor);
  Serial.println (operacion);
}