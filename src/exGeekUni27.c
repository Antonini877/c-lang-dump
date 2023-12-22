#include <stdio.h>

int main(){
    float a1,a2,a3,soma,premio;
    printf("premio: ");
    scanf("%f", &premio);
    printf("primeiro: \n");
    scanf("%f", &a1);
    printf("segundo \n");
    scanf("%f", &a2);
    printf("terceiro: \n");
    scanf("%f", &a3);
    soma = a1+a2+a3;
    float Pa1 = a1/soma;
    float Pa2 = a2/soma;
    float Pa3 = a3/soma;
    printf("%.1f\n", Pa1*premio);
    printf("%.1f\n", Pa2*premio);
    printf("%.1f\n", Pa3*premio);
    return 0;
}