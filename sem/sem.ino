int rojo=8;      //definimos el valor del pin para el led rojo
int amarillo=9;  //definimos el valor del pin para el led amarillo
int verde=10;     //definimos el valor del pin para el led verde
int rojo2=3;
int amarillo2=4;
int verde2=5;

int ir1=6;
int ir2=12;

//** Programa **//

void setup() {
  pinMode(verde,OUTPUT);   //declaramos el pin verde como salida  
  pinMode(amarillo,OUTPUT);//declaramos el pin amarillo como salida
  pinMode(amarillo2,OUTPUT);
  pinMode(rojo,OUTPUT);    //declaramos el pin rojo como salida  
  pinMode(rojo2,OUTPUT);
  pinMode(verde2,OUTPUT);
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
}

void loop() {
 digitalWrite(verde,HIGH); 
 digitalWrite(rojo2,HIGH);
 delay(6000);
 digitalWrite(verde,LOW); 
 digitalWrite(rojo2,HIGH);
 delay(500);              
 digitalWrite(verde,HIGH); 
 digitalWrite(rojo2,HIGH);
 delay(500);              
 digitalWrite(verde,LOW); 
 digitalWrite(rojo2,HIGH);
 delay(500);              
  digitalWrite(verde,HIGH); 
 digitalWrite(rojo2,HIGH);
 delay(500);              
 digitalWrite(verde,LOW); 
 digitalWrite(rojo2,HIGH);
 delay(500);              
  digitalWrite(verde,HIGH); 
 digitalWrite(rojo2,HIGH);
 delay(500);              
 digitalWrite(verde,LOW); 
 digitalWrite(rojo2,HIGH);
 delay(500);              
  digitalWrite(verde,HIGH); 
 digitalWrite(rojo2,HIGH);
 delay(500);              
 digitalWrite(verde,LOW); 
 digitalWrite(rojo2,HIGH);
 delay(500);              
  digitalWrite(verde,HIGH); 
 digitalWrite(rojo2,HIGH);
 delay(500);              
 digitalWrite(verde,LOW); 
 digitalWrite(rojo2,HIGH);
 delay(500);              
 digitalWrite(rojo2,HIGH);
 digitalWrite(verde,HIGH); //encendemos el led rojo
 delay(500);              
 digitalWrite(rojo2,HIGH);
 digitalWrite(verde,HIGH); //encendemos el led rojo
 digitalWrite(rojo2,HIGH);
 delay(500);              
  
 digitalWrite(verde,LOW);  //apagamos el led rojo
 digitalWrite(rojo2,LOW);
     
 //esperamos medio segundo


digitalWrite(amarillo,HIGH);
digitalWrite(amarillo2,HIGH);
delay(500);
digitalWrite(amarillo,LOW);
digitalWrite(amarillo2,LOW);

digitalWrite(amarillo,HIGH);
digitalWrite(amarillo2,HIGH);
delay(500);
digitalWrite(amarillo,LOW);
digitalWrite(amarillo2,LOW);
digitalWrite(amarillo,HIGH);
digitalWrite(amarillo2,HIGH);
delay(500);
digitalWrite(amarillo,LOW);
digitalWrite(amarillo2,LOW);
digitalWrite(amarillo,HIGH);
digitalWrite(amarillo2,HIGH);
delay(500);
digitalWrite(amarillo,LOW);
digitalWrite(amarillo2,LOW);
 
digitalWrite(amarillo,HIGH);
digitalWrite(amarillo2,HIGH);
delay(1000);

 digitalWrite(amarillo,LOW);
 digitalWrite(amarillo2,LOW);
 
 /////////////////

 digitalWrite(verde2,HIGH); 
 digitalWrite(rojo,HIGH);
 delay(6000);
 digitalWrite(verde2,LOW); 
 delay(500);              
 digitalWrite(verde2,HIGH); 
 delay(500);              
 digitalWrite(verde2,LOW); 
 delay(500);              
  digitalWrite(verde2,HIGH); 
 delay(500);              
 digitalWrite(verde2,LOW); 
 delay(500);              
  digitalWrite(verde2,HIGH); 
 delay(500);              
 digitalWrite(verde2,LOW); 
 delay(500);              
  digitalWrite(verde2,HIGH); 
 delay(500);              
 digitalWrite(verde2,LOW); 
 delay(500);              
  digitalWrite(verde2,HIGH); 
 delay(500);              
 digitalWrite(verde2,LOW); 
 delay(500);              
 digitalWrite(verde2,HIGH); //encendemos el led rojo
 delay(500);              
  digitalWrite(verde2,HIGH); //encendemos el led rojo
 delay(500);              
  
 digitalWrite(verde2,LOW);  //apagamos el led rojo
 digitalWrite(rojo,LOW);

 digitalWrite(amarillo,HIGH);
digitalWrite(amarillo2,HIGH);
delay(500);
digitalWrite(amarillo,LOW);
digitalWrite(amarillo2,LOW);

digitalWrite(amarillo,HIGH);
digitalWrite(amarillo2,HIGH);
delay(500);
digitalWrite(amarillo,LOW);
digitalWrite(amarillo2,LOW);
digitalWrite(amarillo,HIGH);
digitalWrite(amarillo2,HIGH);
delay(500);
digitalWrite(amarillo,LOW);
digitalWrite(amarillo2,LOW);
digitalWrite(amarillo,HIGH);
digitalWrite(amarillo2,HIGH);
delay(500);
digitalWrite(amarillo,LOW);
digitalWrite(amarillo2,LOW);
 
digitalWrite(amarillo,HIGH);
digitalWrite(amarillo2,HIGH);
delay(1000);

 digitalWrite(amarillo,LOW);
 digitalWrite(amarillo2,LOW);
}
