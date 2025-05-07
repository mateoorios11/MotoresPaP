#include <Arduino.h>
#include "MotorPaP.h"
int pasoNormalArray[4][4]={
                  {1,1,0,0},
                  {0,1,1,0},
                  {0,0,1,1},
                  {1,0,0,1}
int pasoCompletoArray[4][4]={
                  {1,0,0,0},
                  {0,1,0,0},
                  {0,0,1,0},
                  {0,0,0,1}
int pasoMedioArray[8][4]={
                  {1,0,0,0},
                  {1,1,0,0},
                  {0,1,0,0},
                  {0,1,1,0}
                  {0,0,1,1}
                  {0,0,1,1}
                  {0,0,0,1}
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
            GPIOA->CRH&=~(1<<(i%8)*4)&~(1<<(i%8)*4+1)
                      &~(1<<(i%8)*4+2)&~(1<<(i%8)*4+3);
            GPIOA->CRH|=(1<<(i%8)*4)&~(1<<(i%8)*4+1)
                      &~(1<<(i%8)*4+2)&~(1<<(i%8)*4+3);
        }
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
            GPIOA->CRH&=~(1<<(i%8)*4)&~(1<<(i%8)*4+1)
                      &~(1<<(i%8)*4+2)&~(1<<(i%8)*4+3);
            GPIOA->CRH|=(1<<(i%8)*4)&~(1<<(i%8)*4+1)
                      &~(1<<(i%8)*4+2)&~(1<<(i%8)*4+3);
        }
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
            GPIOA->CRH&=~(1<<(i%8)*4)&~(1<<(i%8)*4+1)
                      &~(1<<(i%8)*4+2)&~(1<<(i%8)*4+3);
            GPIOA->CRH|=(1<<(i%8)*4)&~(1<<(i%8)*4+1)
                      &~(1<<(i%8)*4+2)&~(1<<(i%8)*4+3);
        }
    }
}
void pasoNormal()
{
    int pines[4]={IN0,IN1,IN2,IN3};
    for(g=pasos;g=0;g--){
        for(int j=0;j<4;j++){
            if(pasoNormalArray[g%4][j]){
                GPIOA->BSRR|=(1<<pines[j]);
            }
            else{
                GPIOA->BSRR|=(1<<pines[j]+16);
            }
        }
    }
}
void pasoCompleto(){
    int pines[4]={IN0,IN1,IN2,IN3};
    for(int g=pasos;g=0;g--){
        for(int j=0;j<4;j++){
            if(pasoCompletoArray[g%4][j]){
                GPIOA->BSRR|=(1<<pines[j]);
            }
            else{
                GPIOA->BSRR|=(1<<pines[j]+16);
            }
        }
    }
}
void pasoMedio()
{
    int pines[4]={IN0,IN1,IN2,IN3};
    for(int g=pasos;g=0;g--){
        for(int j=0;j<4;j++){
            if(pasoMedioArray[g%8][j]){
                GPIOA->BSRR|=(1<<pines[j]);
            }
            else{
                GPIOA->BSRR|=(1<<pines[j]+16);
            }
        }
    }
}