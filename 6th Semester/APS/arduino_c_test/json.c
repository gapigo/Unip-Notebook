#include <Arduino_JSON.h>

int main()
{
    JSONVar myObject;
    myObject["hello"] = "world";
    myObject["true"] = true;

    String jsonString = JSON.stringify(myObject);
    Serial.println(jsonString);

    return 0;
}

void decodificar_json()
{
    JSONVar myObject = JSON.parse("{\"chave1\":\"valor1\", \"chave2\":\"valor2\", \"chave3\":\"valor3\"}");

    // JSON.typeof(jsonVar) can be used to get the type of the variable
    if (JSON.typeof(myObject) == "undefined")
    {
        Serial.println("Parsing input failed!");
        return;
    }

    Serial.print("JSON.typeof(myObject) = ");
    Serial.println(JSON.typeof(myObject));
}