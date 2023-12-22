#include <stdio.h>
int potencia(int base, int expoente);
int fatorialExponencial(int n);
int main(){
    printf("%d", fatorialExponencial(4));
    return 0;
}
int potencia(int base, int expoente){
    int potencia = base;
    for(int i=1; i<expoente; i++){
        potencia *= base;
    }
    return potencia;
}
int fatorialExponencial(int n){
    int res = n;
    for(int i=n-1; i>0; i--){
        res = potencia(res, i);
    }
    return res;
}