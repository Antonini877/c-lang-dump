#include <stdio.h>
#include <math.h>
int main(){
    float numero=1;
    while(numero!=0){
        printf("numero: ");
        scanf("%f", &numero);
        printf("raiz quadrada: %.2f\nquadrado: %.2f\ncubo: %.2f\n", sqrt(numero), pow(numero,2), pow(numero, 3));
    }
    return 0;
}