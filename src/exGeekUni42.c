#include <stdio.h>

int main(){
    float laboratorio, semestral, final;
    printf("trabalho semestral: ");
    scanf("%f", &semestral);
    printf("trabalho final: ");
    scanf("%f", &final);
    printf("trabalho de laboratorio: ");
    scanf("%f", &laboratorio);
    float media = (laboratorio*2+final*5+semestral*3)/10;
    if((media>=0)&&(media<=2.9)){
        printf("voce esta reprovado: %.1f", media);
    } else if((media>=3)&&(media<=4.9)){
        printf("voce esta de exame final: %.1f", media);
    } else{
        printf("voce passou: %.1f", media);
    }
    return 0;
}