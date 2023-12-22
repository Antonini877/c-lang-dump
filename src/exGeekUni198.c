#include <stdio.h>
void simplifica(float *numerador, float *denominador);
int main(){
    float numerador = 3600;
    float denominador = 36000;
    simplifica(&numerador, &denominador);
    printf("%.f/%.f\n", numerador, denominador);
    return 0;
}
void simplifica(float *numerador, float *denominador){
    int menor = *numerador<*denominador? (int)*numerador : (int)*denominador;
    int simplificou = 0;
    int divisor = 2;
    while(!simplificou){
        if(!((int)(*numerador)%divisor==0&&(int)(*denominador)%divisor==0)&&divisor>=menor){
            simplificou = 1;
        }
        else if((int)(*numerador)%divisor==0&&(int)(*denominador)%divisor==0){
            *numerador = *numerador/divisor;
            *denominador = *denominador/divisor;
            menor  = *numerador<*denominador? (int)*numerador : (int)*denominador;
            divisor = 1;
        }
        divisor++;
    }
}
