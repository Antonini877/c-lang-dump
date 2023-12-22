#include <stdio.h>
int main(){
    int numero_dig, maior=0,menor=0, c=0;
    while(numero_dig>=0){
        printf("numero: ");
        scanf("%d", &numero_dig);
        if(c==0){maior= numero_dig; menor = numero_dig;}
        if(numero_dig>maior){maior = numero_dig;}
        if(numero_dig<menor){menor = numero_dig;}
        c++;

    }
    printf("maior: %d\nmenor: %d", maior, menor);
    return 0;

}