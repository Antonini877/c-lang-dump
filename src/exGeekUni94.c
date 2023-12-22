#include <stdio.h>
int main(){
    float n=1, d=1, soma=0;
    do{
        soma=soma + n/d;
        n = n + 2;
        d = d + 1;
    }while(n!=99);

    printf("%f", soma);
    return 0;
}