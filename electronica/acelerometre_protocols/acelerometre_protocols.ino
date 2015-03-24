#include <Wire.h>

//////////////////////////////////////////////////////////////////
//¬©2011 bildr
//Released under the MIT License - Please reuse change and share
//Simple code for the ADXL335, prints calculated orientation via serial
//////////////////////////////////////////////////////////////////


//Analog read pins
const int xPin = A0;
const int yPin = A1;
const int zPin = A2;

//The minimum and maximum values that came from
//the accelerometer while standing still
//You very well may need to change these
//int minVal = 265;
//int maxVal = 402;

const int buttonpin = 6;

int buttonstate = 0;
;

//to hold the caculated values
double a_x;
double a_y;
double a_z;

double a_x_ok;
double a_y_ok;
double a_z_ok;


double v_x;
double v_y;
double v_z;

double p_x;
double p_y;
double p_z;

double p_ini_x;
double p_ini_y;
double p_ini_z;

double v_ini_x;
double v_ini_y;
double v_ini_z;

double xRead_ini;
double yRead_ini;
double zRead_ini;

void setup(){
  Serial.begin(9600); 
  pinMode (buttonpin, INPUT);
  Wire.begin();
  protocol();
}


void loop(){
  int i=0;
  int aux = 0;
  int t=0;
  
  buttonstate = digitalRead (buttonpin);

  if(buttonstate == HIGH) {  
    aux ++;
    delay(200);
    
  } 
  //read the analog values from the accelerometer
  if (aux == 1){ 
     buttonstate= LOW;
     while (aux == 1){
      double xRead = analogRead(xPin)*3.3/1023;
      double yRead = analogRead(yPin)*3.3/1023;
      double zRead = analogRead(zPin)*3.3/1023;
      if(i==0){
         xRead_ini = xRead;
         yRead_ini = yRead;
         zRead_ini = zRead;   
      }else{
         a_x=(xRead-xRead_ini)*9.81/0.3;
         a_y=(yRead-yRead_ini)*9.81/0.3;
         a_z=(zRead-zRead_ini)*9.81/0.3;
      }
         // t=0.01*i;   
        if( (a_x < -0.12) || (a_x > 0.12)){
          
           p_x=(a_x*0.033*0.033)/2 + v_x*0.033 + p_ini_x;
           v_x=a_x*0.033 + v_ini_x;
        
        }else if ( v_x !=0 && (a_x > -0.12) && (a_x < 0.12) ){
           
           p_x = v_x*0.033 + p_ini_x;
         
        }else if ( v_x == 0 && (a_x > -0.12) && (a_x < 0.12) ) {
    
          p_x=p_x;
        } 
        
        if( (a_y < -0.12) || (a_y > 0.12)){ 
        
          p_y=(a_y*0.033*0.033)/2 + v_y*0.033 + p_ini_y;
           v_y=a_y*0.033 + v_ini_y;
        
        
        }else if( v_y != 0 && (a_y > -0.12) || (a_y < 0.12) ){
          
            p_y = v_y*0.033 + p_ini_y;
        
        }else if ( v_y == 0 && (a_y > -0.12) && (a_y < 0.12) ) {
    
          p_y=p_y;
        } 
        
        if( (a_z < -0.12) || (a_z > 0.12)){
           
          p_z=(a_z*0.033*0.033)/2 + v_z*0.033 + p_ini_z;
           v_z=a_z*0.033 + v_ini_z;
        
        }else if ( v_z != 0 && (a_z > -0.12) || (a_z < 0.12) ){
            p_z = v_z*0.033 + p_ini_z;
        
        }else if ( v_z == 0 && (a_z > -0.12) && (a_z < 0.12) ) {
    
          p_z=p_z;
        } 
    


  /*  if(a_x > 1 || a_y > 1 || a_z > 1 || a_x < -1 || a_y < -1 || a_z < -1 ){
      Serial.print("error, volver a empezar escaneado ");
      aux = 0;
    }
   
      p_x=(a_x*0.2*0.2)/2+p_x;
      p_y=(a_y*0.2*0.2)/2+p_y;
      p_z=(a_z*0.2*0.2)/2+p_z;*/
     // Serial.print ("posicion final: ");
      Serial.print("dades ");
      Serial.print(p_x);
      Serial.print(" ");
      Serial.print(p_y);
      Serial.print(" ");
      Serial.println(p_z);
      //Serial.println(v_x);
      /*Serial.print("x: ");
      Serial.print(p_x);
      Serial.print(" | y: ");
      Serial.print(p_y);
      Serial.print(" | z: ");
      Serial.println(p_z);*/
      
      p_ini_x = p_x;
      v_ini_x = v_x;
        p_ini_y = p_y;
      v_ini_y = v_y;
        p_ini_z = p_z;
      v_ini_z = v_z;
      
      
      
      buttonstate = digitalRead (buttonpin);
      
      if(buttonstate == HIGH) {  
        aux ++;
        delay(200);
        
      } 


       i++;
       delay(33);
  }
  
  }
  if (aux == 2){
     Serial.print ("escaneado terminado ");
      Serial.print ("posicion final: ");
      Serial.print("x: ");
      Serial.print(p_x);
      Serial.print(" | y: ");
      Serial.print(p_y);
      Serial.print(" | z: ");
      Serial.println(p_z);
      buttonstate= LOW;
      aux=0;
      p_x=0;
      p_y=0;
      p_z=0;
      v_x=0;
      v_y=0;
      v_z=0;
    } 


  //delay(1000);//just here to slow down the serial output - Easier to read
}
void protocol(){
  boolean connection=false;
  while(!connection){
  if(read().equals("who")){
  Serial.println("arduino");
  if(read().equals("OK")){connection=true;}
  }
}
}
 

String read(){
while(!Serial.available());
String str="";
while(Serial.available()){
str+=(char) Serial.read();
delay(1);
}
return str;
}



