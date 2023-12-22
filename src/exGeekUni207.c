#include <stdio.h>
#include <stdlib.h>
void modificarVetorAleatoriamente(int vetor[], int tamanhoVetor);
int main(){
    int vetor[10];
    modificarVetorAleatoriamente(vetor,10);
    
    for(int i=0;i<10; i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}
void modificarVetorAleatoriamente(int vetor[], int tamanhoVetor){
    for(int i=0; i<tamanhoVetor; i++){
        int igual;
        do{
            igual = 0;
            srand(time(NULL)*rand());
            vetor[i] = rand()%100;
            for(int j=0; j<i; j++){
                if(vetor[j]==vetor[i]){
                    igual = 1;
                }
            }
        }while(igual);
    }
}
