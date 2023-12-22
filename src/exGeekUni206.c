#include <stdio.h>
double mediaVetor(double vetor[], int tamanho);
int main(){
    double vetor[10] = {4.56, 5.55, 6.0, 11.12,2.22,3.56,7.5,9.0,17.4, 1.1};
    printf("%.2f", mediaVetor(vetor, 10));
    return 0;
}
double mediaVetor(double vetor[], int tamanho){
    double soma = 0;
    for(int i=0; i<tamanho; i++){
        soma+=vetor[i];
    }
    return soma/tamanho;
}