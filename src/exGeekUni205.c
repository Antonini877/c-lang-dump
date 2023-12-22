#include <stdio.h>
int maiorValorVetor(int vetor[], int tamanhoDoVetor);
int main(){
    int vetor[6] = {1,2,3,4,5,100};
    printf("%d", maiorValorVetor(vetor, 6));
    return 0;
}
int maiorValorVetor(int vetor[], int tamanhoDoVetor){
    int maior = vetor[0];
    for(int i=1; i<tamanhoDoVetor; i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
    }
    return maior;
}