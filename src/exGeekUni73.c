#include <stdio.h>

int main(){
    int  acumulador=0;
    for(int c = 0; c<=50;c++){
       if(c%2==0){
            acumulador = c +acumulador;
        }
    }
    printf("%d", acumulador);
    return 0;
}