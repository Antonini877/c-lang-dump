#include <stdio.h>
void impressaoVetor(int v[], int tamanho);
void impressaoInversaVetor(int v[], int tamanho);
double mediaVetor(int v[], int tamanho);
int main(){
    int vetor[5] = {0,1,2,3,4,5};
    impressaoVetor(vetor, 5);
    impressaoInversaVetor(vetor, 5);
    double media = mediaVetor(vetor, 5);
    printf("a media e %f", media);
    return 0;
}
void impressaoVetor(int v[], int tamanho){
    for(int c = 0; c<tamanho; c++){
        printf("%d \n", v[c]);
    }
}

void impressaoInversaVetor(int v[], int tamanho){
    for(int c = tamanho-1; c>=0; c--){
             printf("%d \n", v[c]);
    }
}

double mediaVetor(int v[], int tamanho){
    int soma = 0;
    for(int c = 0; c<tamanho; c++){
        soma+= v[c];
    }
    return (double) soma/tamanho;
}