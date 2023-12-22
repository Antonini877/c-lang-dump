#include<stdio.h>
int main(){
    float valor;
    short int est;
    printf("1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");
    printf("estado: ");
    scanf("%d", &est);
    printf("valor: ");
    scanf("%f", &valor);
    switch(est){
        case 1:
            printf("%.2f", (0.07*valor)+valor);
            break;
        case 2:
            printf("%.2f", (0.12*valor)+valor);
            break;
        case 3:
            printf("%.2f", (0.15*valor)+valor);
            break;
        case 4:
            printf("%.2f", (0.08*valor)+valor);
            break;
        default:
            printf("erro");
            break;
        
    
    }

    return 0;

}