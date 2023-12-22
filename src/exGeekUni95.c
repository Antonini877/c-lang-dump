#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int n;
    printf("n: ");
    scanf("%d", &n);
    for(int c=0; c<n; c++){
    int dado1 = rand()%6 + 1;
    int dado2 = rand()%6 + 1;
    if(dado1>dado2){
        printf("primeiro dado %d e maior que o segundo dado %d\n", dado1, dado2);
    }
    else if(dado1<dado2){
        printf("segundo dado  %d e maior que o primeiro dado  %d\n", dado2, dado1);
    } else{
        printf("sao iguais\n");
        }
    }
    return 0;
}