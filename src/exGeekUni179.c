#include <stdio.h>
int dobro(int n);
int main(){
    int numero = 10;
    int d = dobro(numero);
    printf("%d", d);
}

int dobro(int n){
    return n*2;
}