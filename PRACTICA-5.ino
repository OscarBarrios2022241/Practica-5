#include <Keypad.h>//Libreria para usar el teclado matricial
#define FILAS 4//se indican las filas del teclado
#define COLUMNAS 4//se indican las columnas del teclado

const int a = 10;//Pines que van al display
const int b = A0;//Pines que van al display
const int c = A1;//Pines que van al display
const int d = A2;//Pines que van al display
const int e = A3;//Pines que van al display
const int f = A4;//Pines que van al display
const int g = A5;//Pines que van al display

char keys[FILAS][COLUMNAS] = {
  {'1','2','3','A'},//Se indica como es el teclado matricial (pertenece a la libreria)
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

char key;
byte Filas[FILAS]={9,8,7,6};//Pines a los que se conecta el teclado matricial
byte Columnas[COLUMNAS] = {5,4,3,2};//Pines a los que se conecta el teclado matricial

Keypad teclado = Keypad(makeKeymap(keys),Filas, Columnas,FILAS,COLUMNAS);

void setup()
{
  pinMode(a, OUTPUT);//Se configuran los pines como salida
  pinMode(A0,OUTPUT);//Se configuran los pines como salida
  pinMode(A1,OUTPUT);//Se configuran los pines como salida
  pinMode(A2,OUTPUT);//Se configuran los pines como salida
  pinMode(A3,OUTPUT);//Se configuran los pines como salida
  pinMode(A4,OUTPUT);//Se configuran los pines como salida
  pinMode(A5,OUTPUT);//Se configuran los pines como salida
 Serial.begin(9600);//Se inicia el monitor serial 
}

void loop(){
  key = teclado.getKey();
  
  if(key){
  Serial.println(key);
  }

  switch(key){
  case '1'://Si se presiona el numero 1 en el teclado generará un numero 1 en el display
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);

   break;
   
  case '2'://Si se presiona el numero 2 en el teclado generará un numero 2 en el display
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);

   break;
  
  case '3'://Si se presiona el numero 3 en el teclado generará un numero 3 en el display
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    break;
  
  case '4'://Si se presiona el numero 4 en el teclado generará un numero 4 en el display
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;

  case '5'://Si se presiona el numero 5 en el teclado generará un numero 5 en el display
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;

  case '6'://Si se presiona el numero 6 en el teclado generará un numero 6 en el display
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;

  case '7'://Si se presiona el numero 7 en el teclado generará un numero 7 en el display
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    break;

  case '8'://Si se presiona el numero 8 en el teclado generará un numero 8 en el display
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;

  case '9'://Si se presiona el numero 9 en el teclado generará un numero 9 en el display
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;

  case '0'://Si se presiona el numero 0 en el teclado generará un numero 0 en el display
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    break;

  case 'A'://Si se presiona la "A" en el teclado generará "A" en el display
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;

  case 'B'://Si se presiona la "B" en el teclado generará "B" en el display
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;

  
  case 'C'://Si se presiona la "C" en el teclado generará "C" en el display
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    break;

  
  case 'D'://Si se presiona la "D" en el teclado generará "D" en el display
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    break;

  case '#'://Si se presiona "#" en el teclado generará "E" en el display
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;

   case '*'://Si se presiona "*" en el teclado generará "F" en el display
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;





  
  }
}