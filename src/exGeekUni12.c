#include <stdio.h>

int main(){
    float reais;
    printf("valor em reais: \n");
    scanf("%f", &reais);
    printf("em dolares: \n");
    printf("%.3f", reais*0.17);
    return 0;
}