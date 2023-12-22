#include <stdio.h>

int main(){
    float raio;
    printf("raio: \n");
    scanf("%f", &raio);
    printf("area: \n");
    printf("%.3f", raio*raio*3.14);
    return 0;
}