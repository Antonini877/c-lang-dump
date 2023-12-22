#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    printf("nota 1: ");
    scanf("%f", &nota1);
    printf("nota 2: ");
    scanf("%f", &nota2);
    printf("nota 3: ");
    scanf("%f", &nota3);
    float media = (nota1+nota2+nota3*2)/4;
    if (media>60){
        printf("voce foi aprovado com: %.1f", media);
        } else{
            printf("voce foi reprovado: %.1f", media);
        }
        return 0;
}