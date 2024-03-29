#include <reg51.h>

sbit LED1 = P1^0, LED2 = P1^1;

// Main Function
void main()
{
    InitINT0();
    InitINT1(); 
    while(1);
}

void port_init()
{
    P0 = 0x00;
    P1 = 0x00;
    P2 = 0x00;
    P3 = 0x0C;
}

void InitINT0()  // INT0 ISR
{
    EA = 1;  /* Enable global interrupt */
	EX0 = 1;      	/* Enable Ext. interrupt0 */
	IT0 = 1;      	/* Select Ext. interrupt0 on falling edge */
   }

void InitINT1()  // INT1 ISR
{
    IT1 = 1;
    EX1 = 1;
    EA = 1;
}

void external0_isr() interrupt 0  // External Interrupt 0 ISR
{
    LED1 = ~LED1;
}

void external1_isr() interrupt 2  // External Interrupt 1 ISR
{
    LED2 = ~LED2;
}
