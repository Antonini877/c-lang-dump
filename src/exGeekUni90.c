#include <stdio.h>
int main(){
    int n;
    float acumulador=0;
    printf("numero: ");
    scanf("%d", &n);
    for(int c = 1; c<=n; c++){
        acumulador = acumulador + (1/(float)c);
    }
    printf("%.2f", acumulador);
    return 0;
}