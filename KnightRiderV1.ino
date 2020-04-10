/**
 * Author: Petar Tonkov
 * Date: 27.X.2019
 * Project Description: Knight rider  assignment
 * Parameter list: index,timer,pinArray[]
 */


int pinArray[] = {2, 3, 4, 5, 6, 7};
int index = 0;
const int TIMER = 100;

void setup(){
  for (index=0;index<6;index++) {
    pinMode(pinArray[index], OUTPUT);
  }
}

void loop() 
{
 digitalWrite(pinArray[0], HIGH);
 delay(TIMER);
 digitalWrite(pinArray[0], LOW);
 digitalWrite(pinArray[1], HIGH);
 digitalWrite(pinArray[2],HIGH);
 delay(TIMER);
 digitalWrite(pinArray[1], LOW);
 digitalWrite(pinArray[2], LOW);
 delay(TIMER);
 digitalWrite(pinArray[3],HIGH);
 digitalWrite(pinArray[4], HIGH);
 delay(TIMER);
 digitalWrite(pinArray[3], LOW);
 digitalWrite(pinArray[4], LOW);
 delay(TIMER);
 digitalWrite(pinArray[5] , HIGH);
 delay(TIMER);
 digitalWrite(pinArray[5], LOW);
 delay(TIMER);
 digitalWrite(pinArray[4], HIGH);
 digitalWrite(pinArray[3], HIGH);
 delay(TIMER);
 digitalWrite(pinArray[4], LOW);
 digitalWrite(pinArray[3], LOW);
 delay(TIMER);
 digitalWrite(pinArray[2], HIGH);
 digitalWrite(pinArray[1], HIGH);
 delay(TIMER);
 digitalWrite(pinArray[2], LOW);
 digitalWrite(pinArray[1], LOW);
 delay(TIMER);
 digitalWrite(pinArray[0], HIGH);
 delay(TIMER);
 digitalWrite(pinArray[0], LOW);
}
