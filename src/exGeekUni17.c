#include <stdio.h>
int main(){
    float a,r;
    printf("altura: \n");
    scanf("%f", &a);
    printf("raio: \n");
    scanf("%f", &r);
    printf("o volume do cilindro e: %.6f", 3.1415928*(r*r)*a);
    return 0;
}