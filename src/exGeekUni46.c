#include <stdio.h>

int main(){
    int operacao;
    float n1, n2;
    printf("soma: 1; divisao: 2; subtracao: 3; multiplicacao: 4:   ");
    scanf("%d", &operacao);
    printf("numero 1: ");
    scanf("%f", &n1);
    printf("numero 2: ");
    scanf("%f", &n2);
    switch(operacao){
        case 1:
            printf("%.1f", n1+n2);
            break;
        case 2:
            printf("%.1f", n1/n2);
            break;
        case 3:
            printf("%.1f", n1-n2);
            break;
        case 4:
            printf("%.1f", n1*n2);
            break;
        default:
            break;
    
         }
    
    return 0;

}