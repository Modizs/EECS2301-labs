/***************************************
* EECS2031B � Lab1 *
* Author: Saleh, Mohamed *
* Email: mido1996@my.yorku.ca *
* eecs_username: mido1996 *
* York Student #: 213704150 
****************************************/

#include <stdio.h>

float sum (float i, float j);


int main()
{
   float x =2.2, y=3.3;
   float su= sum(x,y);
   printf( "%f and %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}