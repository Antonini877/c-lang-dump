#include <stdio.h>

int main(){
    int numero1, numero2;
    printf("numero: ");
    scanf("%d", &numero1);
    printf("numero 2: ");
    scanf("%d", &numero2);
    
    if(numero1==numero2){
        printf("sao iguais");
    } else if(numero1>numero2){
        printf("primeiro numero e maior");
    } else{
        printf("o segundo numero e maior");
    }
    return 0;
}