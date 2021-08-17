#include <mega32.h>
#include <delay.h>

int t=0,s=0,r=0;

void main(void)
{
    
    DDRB=0b00000000;
    DDRD=0b00000111;
    PORTB.0=1;
    PORTB.1=1;
    PORTB.2=1;
      
    while(1)
    {   
        PORTD.2=1;
            delay_ms(20);
            PORTD.2=0;
            delay_ms(180);
        //button one
        if(PINB.0==0 && t==0)
        {
            PORTD.0=1;
            PORTD.1=0;
            t=1;    
        }
        if(PINB.0==1 && t==1) t=0;
        
        //button two
        if(PINB.1==0 && s==0)
        {
            PORTD.0=0;
            PORTD.1=0;
            
            s=1;    
        }
        if(PINB.1==1 && s==1) s=0;
        
        //button there
        if(PINB.2==0 && r==0)
        {
            PORTD.0=0;
            PORTD.1=1;
            
            r=1;    
        }
        if(PINB.2==1 && r==1) r=0;
            
    }
}