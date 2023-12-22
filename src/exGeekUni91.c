#include <stdio.h>
int main(){
    int n;
    float acumulador=0;
    printf("numero: ");
    scanf("%d", &n);
    for(int c = 1; c<=n; c++){
        acumulador = acumulador + (1/(float)fatorial(c));
    }
    printf("%.7f", acumulador);
    return 0;
}

int fatorial(int numero){
    int total=1;
    for(numero; numero>=1; numero--){
        total = total * numero;
    }
    return total;
}