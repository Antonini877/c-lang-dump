#include <stdio.h>
void trocaValores(int *a, int *b);
int main(){
    int a = 2;
    int b = 3;
    printf("a: %d b: %d\n", a,b);
    trocaValores(&a,&b);
    printf("a: %d b: %d", a,b);
    return 0;
}
void trocaValores(int *a, int *b){
    int temporaria = *a;
    *a = *b;
    *b = temporaria;
}
