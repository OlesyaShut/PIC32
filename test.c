#include "config.h"
#include <stdint.h>
int period = 4000;

void softdelay(int N);
        
void PWM_UP_LED1(int x);
void PWM_UP_LED2(int x);
void PWM_UP_LED3(int x);
void PWM_UP_LED4(int x);

void PWM_DOWN_LED1(int x);
void PWM_DOWN_LED2(int x);
void PWM_DOWN_LED3(int x);
void PWM_DOWN_LED4(int x);

void INIT_GPIO();

int main()
{
	INIT_GPIO();
    
    while (1){
     
     PWM_UP_LED1(period);
     PWM_UP_LED2(period);
     PWM_UP_LED3(period);
     PWM_UP_LED4(period);
     
     
     PWM_DOWN_LED1(period);
     PWM_DOWN_LED2(period);
     PWM_DOWN_LED3(period);
     PWM_DOWN_LED4(period);
        
     
    }    
   return 0;
}

 
void PWM_UP_LED1(int x)       {
    int j = 0;  
    int i = x; //?????? ???????? ???? ???????? ?????
    LATGbits.LATG6 = 0; //???????? ???? ? ????
    int counter; //?????????? ??????
    for (counter = 0; counter < x; counter++){          
          LATGbits.LATG6 = 0;  //???????? ???? ? ????  
          softdelay(i);
          LATGbits.LATG6 = 1;  //???????? ???? ? ???????
          softdelay(j);
          i--;
          j++;
                                                 }
    LATGbits.LATG6 = 1;  //???????? ???? ? ???????
                              }

void PWM_UP_LED2(int x)       {
    int j = 0;
    int i = x;
    LATDbits.LATD4 = 0;
    int counter;
    for (counter = 0; counter < x; counter++){          
          LATDbits.LATD4 = 0;    
            softdelay(i);
          LATDbits.LATD4 = 1;
            softdelay(j);
          i--;
          j++;
                                                 }
    LATDbits.LATD4 = 1;
                              }

void PWM_UP_LED3(int x)       {
    int j = 0;
    int i = x;
    LATBbits.LATB11 = 0;
    int counter;
    for (counter = 0; counter < x; counter++){          
          LATBbits.LATB11 = 0;    
          softdelay(i);
          LATBbits.LATB11 = 1;
          softdelay(j);
          i--;
          j++;
                                                 }
    LATBbits.LATB11 = 1;
                              }

void PWM_UP_LED4(int x)       {
    int j = 0;
    int i = x;
    LATGbits.LATG15 = 0;
    int counter;
    for (counter = 0; counter < x; counter++){          
          LATGbits.LATG15 = 0;    
          softdelay(i);
          LATGbits.LATG15 = 1;
          softdelay(j);
          i--;
          j++;
                                                }
    LATGbits.LATG15 = 1;
                              }

void PWM_DOWN_LED1(int x)   {
    int j = 0;
    int i = x;
    LATGbits.LATG6 = 1;
    int counter;
    for (counter = 0; counter < x; counter++){          
          LATGbits.LATG6 = 0;    
          softdelay(j);
          LATGbits.LATG6 = 1;
          softdelay(i);
          i--;
          j++;
                                                 }
    LATGbits.LATG6 = 0;
                              }



void PWM_DOWN_LED2(int x)       {
    int j = 0;
    int i = x;
    LATDbits.LATD4 = 1;
    int counter;
    for (counter = 0; counter < x; counter++){          
          LATDbits.LATD4 = 0;    
            softdelay(j);
          LATDbits.LATD4 = 1;
            softdelay(i);
          i--;
          j++;
                                                 }
    LATDbits.LATD4 = 0;
                              }


void PWM_DOWN_LED3(int x)       {
    int j = 0;
    int i = x;
    LATBbits.LATB11 = 1;
    int counter;
    for (counter = 0; counter < x; counter++){          
          LATBbits.LATB11 = 0;    
          softdelay(j);
          LATBbits.LATB11 = 1;
          softdelay(i);
          i--;
          j++;
                                                 }
    LATBbits.LATB11 = 0;
                              }

void PWM_DOWN_LED4(int x)       {
    int j = 0;
    int i = x;
    LATGbits.LATG15 = 1;
    int counter;
    for (counter = 0; counter < x; counter++){          
          LATGbits.LATG15 = 0;    
          softdelay(j);
          LATGbits.LATG15 = 1;
          softdelay(i);
          i--;
          j++;
                                                }
    LATGbits.LATG15 = 0;
                              }

void INIT_GPIO(){
  TRISGbits.TRISG6 = 0;
  TRISBbits.TRISB11 = 0;
  TRISDbits.TRISD4 = 0;
  TRISGbits.TRISG15 = 0;
  
  LATGbits.LATG6 = 0;
  LATBbits.LATB11 = 0;
  LATDbits.LATD4 = 0;
  LATGbits.LATG15 = 0;      
}


void softdelay(int N)
{
    volatile int inner;
    for (inner = 0; inner < N; inner++);
}
















