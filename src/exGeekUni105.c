#include <stdio.h>
int main(){
    float valor; 
    int escolha;
    do{
        printf("*****************\n");
        printf("       MENU      \n");
        printf("*****************\n");
        printf("                 \n");
        printf("1 - KM/H -> M/S\n");
        printf("2 - M/S -> KM/H\n");
        printf("3 - SAIR\n");
        printf("                 \n");
        printf("ESCOLHA: ");
        scanf("%d", &escolha);
        switch(escolha){
            case 1:
                printf("KM/H: ");
                scanf("%f", &valor);
                printf("%.2f M/S\n", valor/3.6);
                break;
            case 2:
                printf("M/S: ");
                scanf("%f", &valor);
                printf("%.2f KM/H\n", valor*3.6);
                break;
            case 3:
                printf("FIM DO PROGRAMA\n");
                break;
            default:
                printf("opcao invalida.\n");
                break;
            }
    }while(escolha!=3);
    return 0;
}