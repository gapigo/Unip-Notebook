#include <Arduino.h>

// si usas esp32
#include <HTTPClient.h>
#include <WiFi.h>

// si usas esp8266
//#include <ESP8266WiFiMulti.h>
//#include <ESP8266HTTPClient.h>

const char *ssid = "Katia_lara_vitor";
const char *password = "katialaravi4286";
void enviarDados();
void receberDados();
void setup()
{
    Serial.begin(9600);

    WiFi.begin(ssid, password);

    Serial.println("Conectando..");
    while (WiFi.status() != WL_CONNECTED)
    { // Check for the connection
        delay(1500);
        Serial.print(".");
    }

    Serial.println("Conectado con éxito, mi IP es: ");
    Serial.println(WiFi.localIP());
    enviarDados();
    receberDados();
}
void enviarDados()
{
    int iluminacao, pressao, temperatura, umidade;

    iluminacao = 600;
    pressao = 1;
    temperatura = 20;
    umidade = 30;

    HTTPClient http;
    String datos_a_enviar = "{\"iluminacao\":" + String(iluminacao) + ",\"pressao\":" + String(pressao) + ",\"temperatura\":" + String(temperatura) + ",\"umidade\": " + String(umidade) + " }";

    http.begin("https://arduino-unip.herokuapp.com/sensores"); // Indicamos el destino
    http.addHeader("Content-Type", "application/json");        // Preparamos el header text/plain si solo vamos a enviar texto plano sin un paradigma llave:valor.

    int codigo_respuesta = http.POST(datos_a_enviar); // Enviamos el post pasándole, los datos que queremos enviar. (esta función nos devuelve un código que guardamos en un int)

    if (codigo_respuesta > 0)
    {
        Serial.println("Código HTTP ► " + String(codigo_respuesta)); // Print return code

        if (codigo_respuesta == 200)
        {
            String cuerpo_respuesta = http.getString();
            Serial.println("El servidor respondió ▼ ");
            Serial.println(cuerpo_respuesta);
        }

        else if (codigo_respuesta != 204)
        {

            Serial.print("Error enviando POST, código: ");
            Serial.println(codigo_respuesta);
        }

        http.end(); // libero recursos
    }
    else
    {
        Serial.println("Error en la conexión WIFI");
    }
    delay(1500);
}

void receberDados()
{
    HTTPClient http;
    http.begin("https://arduino-unip.herokuapp.com/motores"); // Indicamos el destino
    if (http.GET() > 0)
    {
        String payload = http.getString();
        Serial.println(payload);
    }
}
void loop()
{

    if (WiFi.status() == WL_CONNECTED)
    { // Check WiFi connection status
        Serial.println("conectado");
    }
}