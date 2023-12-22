#include <stdio.h>

int main(){
    int continuar, par=0;
    do{
        printf("digite um numero: ");
        scanf("%d", &continuar);
        if(continuar%2==0){
            printf("e par\n");
            par++;
        } else{
            printf("e impar\n");
        }
    }while(continuar != 1000);
    printf("%d numeros pares", par);
    return 0;
}