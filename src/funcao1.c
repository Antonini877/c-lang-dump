#include <stdio.h>

int quadrado(int a){
    return a*a;
}

int main(void){
    int q;
    printf("numero: ");
    scanf("%d", &q);
    int a = quadrado(q);
    printf("%d", a);
    return 0;
}