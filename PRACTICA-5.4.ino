#include <Keypad.h>//Libreria para usar el teclado matricial


int Led = 13;
int Sensor = 10;
int buzzer = 11;

#define FILAS 4//se indican las filas del teclado
#define COLUMNAS 4//se indican las columnas del teclado

char keys[FILAS][COLUMNAS]={//Se indica como es el teclado matricial (pertenece a la libreria)
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pinesFila[FILAS]={9,8,7,6};//Pines a los que se conecta el teclado matricial
byte pinesColumna[COLUMNAS]={5,4,3,2};//Pines a los que se conecta el teclado matricial

Keypad teclado=Keypad(makeKeymap(keys), pinesFila, pinesColumna,FILAS,COLUMNAS);

char teclaPrecionada;

char pass[6]="23321"; //Poner en el arreglo 1 posicion mas a la que tendra la contraseña correcta
char ingresaPass[6]; // tiene que tener el mismo tamaño del arreglo de la contraseña correcta

int indice=0;



#define buzzon() tone(buzzer, 400)
#define buzzoff() noTone(buzzer)
#define time() delay(1500)
 
void setup()
{
  Serial.begin(9600);
  pinMode(Led, OUTPUT);
  pinMode(Sensor, INPUT);
  buzzon();
  buzzoff();
}
 
void loop()
{
  teclaPrecionada=teclado.getKey();//detecta que en el teclado se pulso un boton
  if(teclaPrecionada){
    ingresaPass[indice]=teclaPrecionada;// le asigna lo que ingresamos a el arreglo que va a ser comparado
    indice++; //cambiara la posicion del arreglo para poder asignar los caracteres
    Serial.print(teclaPrecionada);
  }
  
  int Sensor = digitalRead(Sensor);
 
  if (Sensor == HIGH)
  {
    digitalWrite(Led, HIGH);
    buzzon();
  }
  else
  {
    digitalWrite(Led, LOW);
 
  }

  if(indice==5){ //cuando se llegue al limite del arreglo verificara si esta correcta o no la contraseña
    if(strcmp(pass,ingresaPass)==0){//Verifica que la contraseña esta correcta
      Serial.println(" Acceso permitido");//Imprime en el monitor serial "Acceso Permitidp"
      buzzoff();
    }
    indice=0;
  }
}