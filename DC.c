#include<reg52.h>
#include<stdio.h>

void delay(void);

sbit motor_pin_1 = P2^0;
sbit motor_pin_2 = P2^1;
sbit motor_pin_3= P2^2;
sbit motor_pin_4 = P2^3;
sbit push = P2^4;
sbit push2= P2^5;

void main()
{
  do
  {
		if(push==0)
		{ motor_pin_1 = 1;
    motor_pin_2 = 0; //Rotates Motor Anit Clockwise
		  delay();
		motor_pin_1 = 0;
    motor_pin_2 = 1; //Rotates Motor Clockwise}
		delay();
  
if(push==1)
{motor_pin_1 = 1;
    motor_pin_2 = 1; //Stops Motor
    delay();

    delay();
    motor_pin_1 = 0;
    motor_pin_2 = 0; //Stops Motor
    delay();
}
if(push2==0)
{ motor_pin_3 = 1;
    motor_pin_4 = 0; //Rotates Motor Anit Clockwise
    delay();
    motor_pin_3 = 0;
    motor_pin_4 = 1; //Rotates Motor Clockwise
    delay();
}
if(push2==1)
{
	 motor_pin_3 = 1;
    motor_pin_4 =1; //Stops Motor
    delay();
    motor_pin_3 = 0;
    motor_pin_4 = 0; //Stops Motor
    delay();
}
		
  }
}while(1);
}

void delay()
{
  int i,j;
  for(i=0;i<1;i++)
  {
    for(j=0;j<1;j++)
    {
    }
  }
}