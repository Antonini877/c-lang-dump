#include <stdio.h>

int main(){
    int n;
    printf("numero: ");
    scanf("%d", &n);
    int acumulador = 0;
    for(int c = 0; c<=n;c++){
        acumulador = acumulador + c;
    }
    printf("%d", acumulador);
    return 0;
}