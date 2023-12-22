#include <stdio.h>
#include <stdlib.h>
int maior(int n1, int n2);
int main(int argc, char *argv[]){
    if(argc==3){
        long n1 = atoi(argv[1]);
        long n2 = atoi(argv[2]);
        maior(n1,n2);
    }else{
        printf("coloque 2 numeros como parametros!");
    }
}
int maior(int n1, int n2){
    if(n1>n2){
        printf("primeiro e maior: %d do que o segundos: %d", n1, n2);
    }else if(n1<n2){
        printf("o segundo: %d e maior que o primeiro: %d", n2,n1);
    }else{
        printf("sao iguais!");
    }
}