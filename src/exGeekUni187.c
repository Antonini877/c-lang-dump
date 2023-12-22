#include <stdio.h>
#include <math.h>
#define PI 3.141592
double volume_cilindro(double h, double raio);
int main(){
    double altura = 10;
    double raio = 7.15;
    printf("%5f", volume_cilindro(altura, raio));
}
double volume_cilindro(double h, double raio){
    return PI*pow(raio,2)*h;
}