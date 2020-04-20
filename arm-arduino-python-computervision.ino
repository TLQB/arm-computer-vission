#include<Servo.h>

float alpha, alpha1,alpha2,beta,gama;
Servo servo1;
Servo servo2;
Servo servo3;
void setup()
{
 Serial.begin(9600); 
 servo1.attach(2);
 servo2.attach(3);
 servo3.attach(4);
}
void loop()
{
  if(Serial.available() > 0)
  {  
    if(alpha<180||alpha>0){
      alpha = Serial.parseInt();
       servo1.write(alpha);
           if(gama<180||gama>0){
            gama = Serial.parseInt();
            servo2.write(gama);
               if(beta<180||beta>0){
                 beta = Serial.parseInt();
                 servo3.write(beta);}
    
                                }
                             }
    
    
      
    }
    //servo1.write(alpha);
    //servo2.write(gama);
    //servo3.write(beta);
    else{
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
      }
      
  }
/*trigono_xyz(40, 50, 20); //contoh x,y,z
Serial.print("gama= ");
Serial.print(gama);
Serial.print(", alpha= ");
Serial.print(alpha);
Serial.print(", beta= ");
Serial.print(beta);
Serial.println();*/

/*
void trigono_xyz(float x, float y, float z)
{
 L1=sqrt(sq(x)+sq(y));
 gama=atan(x/y)/PI*180;
 L=sqrt(sq(L1-cx)+sq(z));
 beta=acos((sq(tb)+sq(fm)-sq(L))/(2*tb*fm))/PI*180;
 alpha1=acos(z/L)/PI*180;
 alpha2=acos((sq(fm)+sq(L)-sq(tb))/(2*fm*L))/PI*180;
 alpha=alpha1+alpha2;
 servo1.write(alpha);
 servo2.write(gama);
 servo3.write(beta);
 
 
}*/
