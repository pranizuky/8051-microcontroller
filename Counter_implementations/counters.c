//up counter,down counter and exponential counter via 7 segment display

#include<reg51.h>

sbit s1 = P1^0;
sbit s2 = P1^1;
sbit s3 = P1^2;
sbit s4 = P1^3;

void delay()
{
	int i,j;
	for(i=0; i<1000000; i++);
}

void up_count(int time)
{
	int i;
	for(i=0; i<time; i++)
	{
		delay();
		P1 = i;
	}
}
void main()
{
	up_count(10);
}
