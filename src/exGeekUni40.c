#include <math.h>
#include <stdio.h>
int main(){
    int numero;
    printf("numero: ");
    scanf("%d", &numero);
    if(numero>0){
        printf("%.1f", log10(numero));
    } else{
        printf("numero invalido");
    }
    return 0;
}