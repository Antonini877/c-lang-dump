#include <stdio.h>

int main(){
    short int numero, div;
    printf("insira um numero: ");
    scanf("%d", &numero);
    div = numero;
    for(div; div>=0; div--){
        if(numero%div==0){
            printf("%d\n", div);
        }
    }
    return 0;
}