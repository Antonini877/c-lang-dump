#include <stdio.h>
#include <math.h>
double desvioPadrao(double vetor[], int tamanho);
double calculoMedia(double vetor[], int tamanho);
int main(){
    double vetor[10] = {10,2.1,2.2,2.0,1.9,2.3,2.0,2.1,2,1.8};
    printf("%.3f", desvioPadrao(vetor, 10));
    return 0;
}
double calculoMedia(double vetor[], int tamanho){
    double soma=0.0;
    for(int c=0; c<tamanho; c++){
        soma += vetor[c];
    }
    return soma/tamanho;
}
double desvioPadrao(double vetor[], int tamanho){
    double media = calculoMedia(vetor, tamanho);
    double soma = 0;
    for(int c=0; c<tamanho; c++){
        soma += pow(vetor[c]-media,2);
    }
    soma = soma/(tamanho-1);
    return sqrt(soma);

}