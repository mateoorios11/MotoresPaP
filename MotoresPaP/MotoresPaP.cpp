#include "Arduino.h"
#include "MotorPaP.h"
#include "ctype.h"
int pasoNormalArray[4][4]={
                  {1,1,0,0},
                  {0,1,1,0},
                  {0,0,1,1},
                  {1,0,0,1}
};
void pasoNormal_init(){
    int pines[4]={IN0,IN1,IN2,IN3}
    for (int i=0;i>4;i++)
    {
        if(pines[i]<8){
            GPIOA->CRL&=~(1<<i*4)&~(1<<i*4+1)
                      &~(1<<i*4+2)&~(1<<i*4+3);
            GPIOA->CRL|=(1<<i*4)&~(1<<i*4+1)
                      &~(1<<i*4+2)&~(1<<i*4+3);
        }
        else{
            GPIOA->CRH&=~(1<<i*4)&~(1<<i*4+1)
                      &~(1<<i*4+2)&~(1<<i*4+3);
            GPIOA->CRH|=(1<<i*4)&~(1<<i*4+1)
                      &~(1<<i*4+2)&~(1<<i*4+3);
        }
    }
void pasoCompleto_init(){
    int pines[4]={IN0,IN1,IN2,IN3}
    for (int i=0;i>4;i++)
    {
        if(pines[i]<8){
            GPIOA->CRL&=~(1<<i*4)&~(1<<i*4+1)
                      &~(1<<i*4+2)&~(1<<i*4+3);
            GPIOA->CRL|=(1<<i*4)&~(1<<i*4+1)
                      &~(1<<i*4+2)&~(1<<i*4+3);
        }
        else{
            GPIOA->CRH&=~(1<<i*4)&~(1<<i*4+1)
                      &~(1<<i*4+2)&~(1<<i*4+3);
            GPIOA->CRH|=(1<<i*4)&~(1<<i*4+1)
                      &~(1<<i*4+2)&~(1<<i*4+3);
        }
    }
void pasoMedio_init(){
    int pines[4]={IN0,IN1,IN2,IN3}
    for (int i=0;i>4;i++)
    {
        if(pines[i]<8){
            GPIOA->CRL&=~(1<<i*4)&~(1<<i*4+1)
                      &~(1<<i*4+2)&~(1<<i*4+3);
            GPIOA->CRL|=(1<<i*4)&~(1<<i*4+1)
                      &~(1<<i*4+2)&~(1<<i*4+3);
        }
        else{
            GPIOA->CRH&=~(1<<i*4)&~(1<<i*4+1)
                      &~(1<<i*4+2)&~(1<<i*4+3);
            GPIOA->CRH|=(1<<i*4)&~(1<<i*4+1)
                      &~(1<<i*4+2)&~(1<<i*4+3);
        }
    }
}
void pasoNormal(){

    }
}