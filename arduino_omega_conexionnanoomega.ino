void setup(){
    Serial.begin(9600);
    Serial1.begin(9600); //se escribe el 1 para la inicializacion de los pines tx y rx
}

void loop(){
    if(Serial1.available()){  //si recibimos datos ...
        char dato=Serial1.read();  //leemos los datos
        Serial.print("he recibido: ");
        Serial.println(dato);
    }
}