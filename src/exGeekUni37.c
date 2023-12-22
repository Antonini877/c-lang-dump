#include <stdio.h>

int main(){
    float salario, imprestimo;
    printf("salario: ");
    scanf("%f", &salario);
    printf("imprestimo: ");
    scanf("%f", &imprestimo);
    float te = salario*0.2;
    if(imprestimo >= te){
        printf("imprestimo nao concedido.");
    } else{
        printf("concedido.");
    }
    return 0;
}