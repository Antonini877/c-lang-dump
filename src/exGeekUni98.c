#include <stdio.h>
int main(){
    int soma=0, i,f;
    printf("inicial: ");
    scanf("%d", &i);
    printf("final: ");
    scanf("%d", &f);
    if(i<f){
    for(i; i<f; i++){
        if(i%2!=0){
            soma = soma + i;
        }    
    }
    printf("%d", soma);
    } else{
        printf("intervalo invalido\n");
    }
    return 0;
}