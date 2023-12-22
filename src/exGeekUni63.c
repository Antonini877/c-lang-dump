#include <stdio.h>
#include <math.h>
int main(){
    float horarioI, horarioC, horas;
    printf("horario de ida: ");
    scanf("%f", &horarioI);
    printf("horario de chegada: ");
    scanf("%f", &horarioC);
    if(horarioC<horarioI){
        horas =  horarioI-horarioC+24;
    }
    else{
        horas = horarioC-horarioI;
    }
    horas = ceil(horas);
    if(horas<=2){
        printf("tarifa 1.");
    }
    else if(horas==4||horas==3){
        printf("tarifa 1.40");
    }
    else{
        printf("tarifa 2");
    }
    return 0;
}