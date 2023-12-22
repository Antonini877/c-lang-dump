#include<stdio.h>
int boolPrimo(int numero);
int qntPrimosAntes(int final);
int main(){
    printf("%d", qntPrimosAntes(25));
    return 0;
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
int qntPrimosAntes(int final){
    int contagemDePrimos = 0;
    for(int c=2; c < final;c++){
        if(boolPrimo(c)){
            contagemDePrimos++;
        }
    }
    return contagemDePrimos;
}