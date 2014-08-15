/*****************************************************
This program was produced by the
CodeWizardAVR V2.05.2 Evaluation
Automatic Program Generator
© Copyright 1998-2011 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 6/30/2014
Author  : Freeware, for evaluation and non-commercial use only
Company : 
Comments: 


Chip type               : ATmega16
Program type            : Application
AVR Core Clock frequency: 8.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*****************************************************/

#include <mega16.h>

// Declare your global variables here

void main(void)
{
// Declare your local variables here

// Input/Output Ports initialization
// Port A initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTA=0x00;
DDRA=0x00;

// Port B initialization
// Func7=In Func6=In Func5=In Func4=In Func3=Out Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=0 State2=T State1=T State0=T 
PORTB=0x00;
DDRB=0x08;

// Port C initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTC=0x00;
DDRC=0x00;

// Port D initialization
// Func7=Out Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=0 State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTD=0x00;
DDRD=0x80;

// Timer/Counter 0 initialization
// Clock source: System Clock
// Clock value: 125.000 kHz
// Mode: CTC top=OCR0
// OC0 output: Toggle on compare match
TCCR0=0x1B;
TCNT0=0x00;
OCR0=0x00;

// Timer/Counter 2 initialization
// Clock source: System Clock
// Clock value: 125.000 kHz
// Mode: CTC top=OCR2
// OC2 output: Toggle on compare match
ASSR=0x00;
TCCR2=0x1C;
TCNT2=0x00;
OCR2=0x00;

// Timer(s)/Counter(s) Interrupt(s) initialization
TIMSK=0x00;
 DDRA=0;
DDRC=255;

while (1)
      {
      if (PINA.6==0 && PINA.7==0)
           
 {
            if(PINA.0==0 && PINA.1==0 && PINA.2==1 && PINA.3==0)
       {
        OCR0=130;
        OCR2=130;
        PORTC.0=0;
        PORTC.1=1;
        PORTC.2=1;
        PORTC.3=0;
       }
      else if(PINA.0==0 && PINA.1==1 && PINA.2==0 && PINA.3==0)
       {
        OCR0=130;
        OCR2=30;
        PORTC.0=0;
        PORTC.1=0;
        PORTC.2=1;
        PORTC.3=0;
       }
      else if(PINA.0==0 && PINA.1==1 && PINA.2==1 && PINA.3==0)
       {
        OCR0=30;
        OCR2=130;
        PORTC.0=0;
        PORTC.1=1;
        PORTC.2=0;
        PORTC.3=0;

       }
      else if(PINA.0==1 && PINA.1==0 && PINA.2==0 && PINA.3==0)
       {
        OCR0=130;
        OCR2=130;
        PORTC.0=1;
        PORTC.1=0;
        PORTC.2=0;
        PORTC.3=1;
       }   
        else if(PINA.0==0 && PINA.1==1 && PINA.2==0 && PINA.3==1)
       {
        OCR0=130;
        OCR2=130;
        PORTC.0=0;
        PORTC.1=0;
        PORTC.2=0;
        PORTC.3=0;
       }
       
     }	
     else if (PINA.6==0 && PINA.7==1)
		{
			
	    OCR0=130;
            OCR2=130;
            PORTC.0=0;
            PORTC.1=1;
            PORTC.2=0;
            PORTC.3=0;
		}
		
		else if (PINA.6==1 && PINA.7==0)
		{
			
			OCR0=130;
			OCR2=130;
            PORTC.0=0;
            PORTC.1=0;
            PORTC.2=1;
            PORTC.3=0;
		}
		else if (PINA.6==1 && PINA.7==1)
		{
			
	    OCR0=130;
            OCR2=130;
            PORTC.0=0;
            PORTC.1=0;
            PORTC.2=0;
            PORTC.3=0;
		}

      }
}
