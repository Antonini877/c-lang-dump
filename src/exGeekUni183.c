#include <stdio.h>
#define PI 3.14159265358979323846
#define VOL(raio)( (3.0/4.0)*(PI)*(raio)*(raio)*(raio))
double esfera(double raio);
int main(){
    double raio = 13.58;
    printf("%f   %f", esfera(raio), VOL(raio));
    return 0;
}
double esfera(double raio){
    double resultado =  (3.0/4.0)*PI*raio*raio*raio;
    return resultado;
}