#include <stdio.h>

int main(){
    float largura, comprimento, p;
    printf("largura: ");
    scanf("%f", &largura);
    printf("comprimento: ");
    scanf("%f", &comprimento);
    printf("preco do metro de cerca: ");
    scanf("%f", &p);
    float perimetro = 2*largura+2*comprimento;
    printf("%.2f", p*perimetro);
    return 0;

}