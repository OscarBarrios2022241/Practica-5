#include <Keypad.h>//Libreria para usar el teclado matricia
#include <Servo.h>//Libreria para usar el servomotor
#include <Adafruit_NeoPixel.h>//Libreria para usar la rueda led

#define tiempo() delay(1500)
#define FILAS 4//se indican las filas del teclado
#define COLUMNAS 4//se indican las columnas del teclado

Adafruit_NeoPixel rueda = Adafruit_NeoPixel(12,13);

char keys[FILAS][COLUMNAS] = {//Se indica como es el teclado matricial (pertenece a la libreria)
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

char key;
byte Filas[FILAS]={9,8,7,6};//Pines a los que se conecta el teclado matricial
byte Columnas[COLUMNAS] = {5,4,3,2};//Pines a los que se conecta el teclado matricial

Keypad teclado = Keypad(makeKeymap(keys),Filas, Columnas,FILAS,COLUMNAS);

Servo servomotor;//Se indica el nombre del servomotor

void setup() {

  Serial.begin(9600);//Se inicia el monitor serial
  rueda.begin();
  rueda.show();
  servomotor.attach(10);//Posicion inicial del servomotor

}

void loop() {
  
  key = teclado.getKey();//Lee la tecla pulsada

  if(key){
  Serial.println(key);//Imprime la variable key en el monitor serial
  }else{
    rueda.clear();
  }
  switch(key){
    case '0'://Si se presiona 0 en el teclado matricial el servomotor ira a 0°
      servomotor.write(0);
      tiempo();
    break;

    case '1'://Si se presiona 1 en el teclado matricial el servomotor ira a 20°
      servomotor.write(20);
      tiempo();
    break;

    case '2'://Si se presiona 2 en el teclado matricial el servomotor ira a 40°
      servomotor.write(40);
      tiempo();
    break;

    case '3'://Si se presiona 3 en el teclado matricial el servomotor ira a 60°
      servomotor.write(60);
      tiempo();
    break;

    case '4'://Si se presiona 4 en el teclado matricial el servomotor ira a 80°
      servomotor.write(80);
      tiempo();
    break;

    case '5'://Si se presiona 5 en el teclado matricial el servomotor ira a 100°
      servomotor.write(100);
      tiempo();
    break;

    case '6'://Si se presiona 6 en el teclado matricial el servomotor ira a 120°
      servomotor.write(120);
      tiempo();
    break;

    case '7'://Si se presiona 7 en el teclado matricial el servomotor ira a 140°
      servomotor.write(140);
      tiempo();
    break;

    case '8'://Si se presiona 8 en el teclado matricial el servomotor ira a 160°
      servomotor.write(160);
      tiempo();
    break;

    case '9'://Si se presiona 9 en el teclado matricial el servomotor ira a 180°
      servomotor.write(180);
      tiempo();
    break;

    case 'A'://Si se presiona "A" generará una secuencia
      for(int i = 0; i<12; i++){
        rueda.setBrightness(100);
        rueda.setPixelColor(i, 235,127,0);
        rueda.show();
        delay(100);
      }
    break;

    case 'B'://Si se presiona "B" generará una secuencia
      for(int i = 0; i<12; i++) {
       rueda.setBrightness(100);
       rueda.setPixelColor(i, 100,127,90);
       rueda.show();
       delay(100);
     }
    break;

    case 'C'://Si se presiona "C" generará una secuencia
     for(int i = 12; i>=-1; i = i-2) {
       rueda.setBrightness(100);
       rueda.setPixelColor(i, 235,235,10);
       rueda.show();
       delay(100);
     } 
    break;

    case 'D'://Si se presiona "D" generará una secuencia
      for(int i = 0; i<12; i++) {
       rueda.setBrightness(100);
       rueda.setPixelColor(i, 205,0,80);
       rueda.show();
       delay(100);
     }
    break;

    case '*' ://Si se presiona "*" generará una secuencia
      for(int i=0;i<12 ;i++){
         rueda.setBrightness(100);
         rueda.setPixelColor(i, 143,10,150);
         rueda.show();
          delay(100);
      }
    break;

    case '#'://Si se presiona "#" generará una secuencia
      for(int i = 0; i<12; i = i+2 ){
       rueda.setBrightness(100);
       rueda.setPixelColor(i, 230,250,130);
       rueda.show();
        delay(100);
      }
    break;
}

}


