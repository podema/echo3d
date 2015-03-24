
// set pin numbers:
const int buttonPin3 = 3;
const int buttonPin4 = 4;
const int buttonPin6 = 6;
const int buttonPin7 = 7;
const int buttonPin8 = 8;// the number of the pushbutton pin
//const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState7 = 0;
int buttonState3 = 0;
int buttonState8 = 0;
int buttonState4 = 0;
int buttonState6 = 0;
// variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  //pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
pinMode(buttonPin7, INPUT); 
pinMode(buttonPin3, INPUT);  
pinMode(buttonPin8, INPUT);  
pinMode(buttonPin4, INPUT);  
pinMode(buttonPin6, INPUT);  
Serial.begin(9600);
  protocol(); 
}

void loop(){
  // read the state of the pushbutton value:
  buttonState7 = digitalRead(buttonPin7);
   buttonState3 = digitalRead(buttonPin3);
    buttonState4 = digitalRead(buttonPin4);
     buttonState8 = digitalRead(buttonPin8);
      buttonState6 = digitalRead(buttonPin6);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState7 == HIGH) {     
    // turn LED on:    
    //digitalWrite(ledPin, HIGH);  
    Serial.println("Control a");
    delay(200);
  } 
  //else {
    // turn LED off:
    //digitalWrite(ledPin, LOW); 
  //}
 if (buttonState3 == HIGH) {     
    // turn LED on:    
    //digitalWrite(ledPin, HIGH);  
    Serial.println("Control s");
    delay(400);
  } 
  //else {
    // turn LED off:
    //digitalWrite(ledPin, LOW); 
  //}
  if (buttonState4 == HIGH) {     
    // turn LED on:    
    //digitalWrite(ledPin, HIGH);  
    Serial.println("Control w");
    delay(200);
  } 
  //else {
    // turn LED off:
    //digitalWrite(ledPin, LOW); 
  //}
  if (buttonState8 == HIGH) {     
    // turn LED on:    
    //digitalWrite(ledPin, HIGH);  
    Serial.println("Control d");
    delay (200);
  } 
  //else {
    // turn LED off:
    //digitalWrite(ledPin, LOW); 
  //}
   if (buttonState6 == HIGH) {     
    // turn LED on:    
    //digitalWrite(ledPin, HIGH);  
    Serial.println("Control  ");
    delay(200);
  } 
  //else {
    // turn LED off:
    //digitalWrite(ledPin, LOW); 
  //}
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
