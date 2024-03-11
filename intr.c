#include <reg51.h>

sbit LED1 = P1^0;
sbit LED2 = P1^1;

// Function Declarations
void port_init();
void InitINT0();
void InitINT1();

// Main Function
void main()
{
    port_init();
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
    IT0 = 1;
    EX0 = 1;
    EA = 1;
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