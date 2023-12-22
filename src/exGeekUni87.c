#include <stdio.h>

int main(){
    int numero, div;
    int acumulador=0;
    printf("insira um numero: ");
    scanf("%d", &numero);
    div = numero;
    acumulador = 0;
    for(div; div>0; div--){
        if(numero%div==0&&div!=numero){
            acumulador = div + acumulador;
             
        }
    }
    printf("%d", acumulador);
    
    
    
    return 0;
}