int pin13 = 13;
int pin12 = 12;
int pin11 = 11;
int pin10 = 10;
int pin9 = 9;
int pin8 = 8;
int pin7 = 7;
int pin6 = 6;
int pin5 = 5;
int pin4 = 4;

int estado = 0;
boolean flag = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin13, OUTPUT);
  digitalWrite(pin13, LOW);
  
  pinMode(pin12, OUTPUT);
  digitalWrite(pin12, LOW);
  
  pinMode(pin11, OUTPUT);
  digitalWrite(pin11, LOW);
  
  pinMode(pin10, OUTPUT);
  digitalWrite(pin10, LOW);
  
  pinMode(pin9, OUTPUT);
  digitalWrite(pin9, LOW);
  
  pinMode(pin8, OUTPUT);
  digitalWrite(pin8, LOW);
  
  pinMode(pin7, OUTPUT);
  digitalWrite(pin7, LOW);
  
  pinMode(pin6, OUTPUT);
  digitalWrite(pin6, LOW);
  
  pinMode(pin5, OUTPUT);
  digitalWrite(pin5, LOW);
  
  pinMode(pin4, OUTPUT);
  digitalWrite(pin4, LOW);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
      estado=Serial.read();
     
        if(estado=='1'){
          flag=!flag;
          digitalWrite(pin13,flag);
          }

        if(estado=='2'){
            flag=!flag;
            digitalWrite(pin12,flag);
          }

        if(estado=='3'){
            flag=!flag;
            digitalWrite(pin11,flag);
          } 

       if(estado=='4'){
            flag=!flag;
            digitalWrite(pin10,flag);
          }    

       if(estado=='5'){
            flag=!flag;
            digitalWrite(pin9,flag);
          } 

       if(estado=='6'){
            flag=!flag;
            digitalWrite(pin8,flag);
          }  

       if(estado=='7'){
            flag=!flag;
            digitalWrite(pin7,flag);
          } 

       if(estado=='8'){
            flag=!flag;
            digitalWrite(pin6,flag);
          }  

       if(estado=='9'){
            flag=!flag;
            digitalWrite(pin5,flag);
          }         
    
}
