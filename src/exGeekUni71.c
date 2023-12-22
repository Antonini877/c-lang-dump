#include <stdio.h>

int main(){
    int c = 0, e, maior=0, menor=0;
    for(c;c<10;c++){
        printf("numero: ");
        scanf("%d", &e);
         if(c==0){
            maior = e;
            menor = e;
        }
        if(e>maior){
            maior = e;
        }
        if(e<menor){
            menor = e;
        }
    }
    printf("maior: %d e menor: %d", maior,menor);
    return 0;
}