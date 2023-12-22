#include <stdio.h>
int somaAlgarismos(int numero);
int main(){
    int numero, somaDosAlgarismos;
    printf("numero: ");
    scanf("%d",&numero);
    if(numero<0){
        printf("erro");
    }else{
        printf("%d", somaAlgarismos(numero));
    }
    return 0;
}
int somaAlgarismos(int numero){
    int somaDosAlgarismos = 0;
    while(numero>0){
        somaDosAlgarismos += numero%10;
        numero = numero/10;
    }
    return somaDosAlgarismos;
}