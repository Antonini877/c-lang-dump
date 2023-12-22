#include <stdio.h>
int main(){
    float n, n2;
    short int escolha;
    do{
        printf("1 - adicao\n");
        printf("2 - subtracao\n");
        printf("3 - multiplicacao\n");
        printf("4 - divisao\n");
        printf("5 - sair\n");
        printf("escolha: ");
        scanf("%d", &escolha);
        switch(escolha){
            case 1:
                printf("numero 1: ");
                scanf("%f", &n);
                printf("numero 2: ");
                scanf("%f", &n2);
                printf("%.2f\n", n + n2);
                break;
            case 2:
                printf("numero 1: ");
                scanf("%f", &n);
                printf("numero 2: ");
                scanf("%f", &n2);
                printf("%.2f\n", n - n2);
                break;
            case 3:
                printf("numero 1: ");
                scanf("%f", &n);
                printf("numero 2: ");
                scanf("%f", &n2);
                printf("%.2f\n", n*n2);
                break;
            case 4:
                printf("numero 1: ");
                scanf("%f", &n);
                printf("numero 2: ");
                scanf("%f", &n2);
                printf("%.2f\n", n/n2);
                break;
            case 5:
                printf("fim\n");
                break;
            default:
                printf("invalido\n");
                break;

        }


    }while(escolha!=5);
    return 0;
}