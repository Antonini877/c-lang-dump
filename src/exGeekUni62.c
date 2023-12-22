#include <stdio.h>

int main(){
    float vendas;
    printf("vendas: ");
    scanf("%f", &vendas);
    if(vendas>=100000){
        printf("%.2f", vendas*0.16+700);
    }
    else if(vendas<100000&&vendas>=80000){
        printf("%.2f", vendas*0.14+650);
    }
    else if(vendas<80000&&vendas>=60000){
        printf("%.2f", vendas*0.14+600);
    } 
    else if(vendas<60000&&vendas>=40000){
        printf("%.2f", vendas*0.14+550);
    }
    else if(vendas<40000&&vendas>=20000){
        printf("%.2f", vendas*0.14+500);
    } else{
        printf("%.2f", vendas*0.14+500);
    }
    return 0;
}