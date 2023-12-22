#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int n = rand()% 1000, tentativa, nt=0;
    do{
    nt++;
    printf("%d\n", n);
    printf("descubra um numero: ");
    scanf("%d", &tentativa);
    if(tentativa>n){
        printf("o numero e menor.\n");
    }
    else if(tentativa<n){
        printf("o numero e maior\n");
    } else{
        printf("voce adivinhou em %d tentativas\n", nt);
    }
    }while(tentativa!=n);
    return 0;
}