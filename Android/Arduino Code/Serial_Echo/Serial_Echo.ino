int i = 0;
int limit = 30;

 void setup()  
 {  
  Serial.begin(9600);  
  
 }  
 void loop()  
 {  
  while(i < limit){
    i++;
    Serial.print(i);
    }
   while(i > ((-1)*limit)){
    i--;
    Serial.print(i);}
 }  
