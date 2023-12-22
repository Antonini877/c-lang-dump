#include <stdio.h>
#include <stdlib.h>
int qntParesEmVetor(int vetor[], int tamanhoDoVetor);
int main(){
    int vetor[5] = {2,4,6,2,13};
    printf("%d", qntParesEmVetor(vetor,5));
    return 0;
}
int qntParesEmVetor(int vetor[], int tamanhoDoVetor){
    int pares = 0;
    for(int i=0; i<tamanhoDoVetor; i++){
        if(vetor[i]%2==0){
            pares++;
        }
    }
    return pares;
}