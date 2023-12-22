#include <stdio.h>
int main(){
    float nominador=0, denominador=0, s=0,den;
    for(int c = 0; c<=5;c++){
        if(c!=0){
            s = s + nominador/fatorial((int)denominador);
        }
        nominador = nominador + 1;
        denominador = denominador + 2;
        
    }
    printf("%.2f", s);
    
    return 0;
}
int fatorial(int numero){
    int total=1;
    int n = numero;
    for(n; n>=1; n--){
        total = total * n;
    }
    return total;
}