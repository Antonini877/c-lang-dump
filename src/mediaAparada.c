#include <stdio.h>
double mediaAparada(double vetor[],int tamanho, int corte);
int main(){
    double vetor[6] = {1,1,10,5,1,1};
    printf("%.2f", mediaAparada(vetor, 6, 2));

    return 0;
}
double mediaAparada(double vetor[],int tamanho, int corte){
    double soma = 0;
    for(int c=corte; c<tamanho-corte;c++){
        soma += vetor[c];
    }
    return soma/(tamanho-2*corte);
}