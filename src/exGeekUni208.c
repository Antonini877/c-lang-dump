#include <stdio.h>
void descobreImparesPares(int vetor[], int pares[], int impares[]);
int contaPares(int vetor[]);
int contaImpares(int vetor[]);
int main(){
    int vetor[30] = {1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
    int pares = contaPares(vetor), impares = contaImpares(vetor);
    int Apares[pares], Aimpares[impares];
    descobreImparesPares(vetor, Apares, Aimpares);
    for(int c=0; c<pares; c++){
        printf("%d\n", Apares[c]);
    }
    printf("impares: \n");
     for(int c=0; c<impares; c++){
        printf("%d\n", Aimpares[c]);
    }

    return 0;
}
void descobreImparesPares(int vetor[], int pares[], int impares[]){ 
    int contagemPares=0,  contagemImpares=0;
    for(int i = 0; i<30; i++){
        if(vetor[i]%2==0){
            pares[contagemPares] = vetor[i];
            contagemPares++;
        }else{
            impares[contagemImpares] = vetor[i];
            contagemImpares++;
        }
    }
}
int contaPares(int vetor[]){
    int pares=0;
    for(int c = 0; c < 30; c++){
        if(vetor[c]%2==0) pares++;
    }
    return pares;
}
int contaImpares(int vetor[]){
    int impares=0;
    for(int c = 0; c < 30; c++){
        if(vetor[c]%2!=0) impares++;
    }
    return impares;
}