#include <stdio.h>
#include <math.h>
int main(){
    long somaq=0, soma=0;
    int n=1;
    for(n; n<100;n++){
        somaq = somaq + pow(n, 2);
        soma = soma + n;

    }
    int somaqq = pow(soma, 2);
    printf("%d\n", (somaq - somaqq) );
    return 0;
}