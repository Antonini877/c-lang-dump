#include <stdio.h>
int potencia(int x, int z);
int main(){
    printf("%d", potencia(5,2));
    return 0;   
}
int potencia(int x, int z){
    int resultado = 1;
    for(int i = 0; i <z; i++){
        resultado *= x;
    }
    return resultado;
}