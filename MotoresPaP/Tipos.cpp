#include "Tipos.h"
#include <Arduino.h>
#include <ctype.h>
#include "MotorPaP.h"
void MotorPap_init(){
    pasoNormal_init(3,4,5,6);
    pasoCompleto_init(3,4,5,6);
    pasoMedio_init(3,4,5,6);    
}