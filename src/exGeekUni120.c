#include <stdio.h>
int main(){
    float n, soma=0,max,min, somaP=0;
    int qnt=0, qntP=0;
    do{
        printf("numero: ");
        scanf("%f", &n);
        if(n==0){break;}
        if(qnt==0){
            min = n;
            max = n;
        } else{
            if(n<min){min=n;}
            if(n>max){max=n;}
        }
        qnt++;
        soma = soma + n;
        if((int)n%2==0){
            somaP = somaP + n;
            qntP++;
        }
    }while(1);
    printf("soma: %.1f\n", soma);
    printf("quantidade: %d\n", qnt);
    printf("media: %.1f\n", soma/qnt);
    printf("maior: %.1f\nmenor: %.1f\n", max, min);
    return 0;
}