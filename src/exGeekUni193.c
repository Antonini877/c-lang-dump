#include <stdio.h>
int maiorPrimo(int referencia);
int boolPrimo(int numero);
int main(){
    printf("%d", maiorPrimo(24444));
    return 0;
}
int maiorPrimo(int referencia){
    int ultimoNumeroPrimoFator = 0;
    for(int c=1; c<=referencia; c++){
        if(referencia%c==0&&boolPrimo(c)){
            ultimoNumeroPrimoFator = c;
        }
    }

    return ultimoNumeroPrimoFator;
}
int boolPrimo(int numero){
    int primo = 1;
    for(int i = 2; i < numero;i++){
        if(numero%i==0){
            primo = 0;
        }
    }

    return primo;
}