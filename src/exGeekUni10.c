#include <stdio.h>

int main(){
    float angulo;
    printf("angulo: \n");
    scanf("%f", &angulo);
    printf("em radianos: \n");
    float c = angulo*3.14;
    printf("%.4f", c/180);
    return 0;
}