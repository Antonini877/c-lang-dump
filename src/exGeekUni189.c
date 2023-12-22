#include <stdio.h>
float mediaAritmetica(float nota1, float nota2, float nota3);
float mediaPonderada(float nota1, float nota2, float nota3);
int main(){
    float nota1, nota2, nota3;
    char tipoDeMedia;
    printf("nota 1: ");
    scanf("%f", &nota1);
    printf("nota 2: ");
    scanf("%f", &nota2);
    printf("nota 3: ");
    scanf("%f", &nota3);
    printf("tipo de media: ");
    scanf(" %c", &tipoDeMedia);
    switch (tipoDeMedia){
        case 'a':
        printf("%.2f", mediaAritmetica(nota1, nota2, nota3));
        break;
        case 'p':
        printf("%.2f", mediaPonderada(nota1, nota2, nota3));
        break;
        default:
        printf("erro");
        break;
    }
    return 0;
}

float mediaAritmetica(float nota1, float nota2, float nota3){
    return (nota1+nota2+nota3)/3;
}
float mediaPonderada(float nota1, float nota2, float nota3){
    return (nota1*5+nota2*3+nota3*2)/10;
}