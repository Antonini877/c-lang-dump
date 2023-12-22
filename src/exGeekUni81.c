#include <stdio.h>
int main(){
    int qtd, maior = 0, valor, co=1;
    printf("quatidade de vezes: ");
    scanf("%d", &qtd);
    for(int c = 0; c <qtd; c++){
        printf("digite o valor: ");
        scanf("%d", &valor);
        if(valor>maior){
            maior = valor;
        }
        else if(valor==maior){
            co++;
        }
    }
    printf("%d * %d", maior, co);
    return 0;
    
}