#include <stdio.h>

int main(){
    float f;
    printf("f: \n");
    scanf("%f", &f);
    printf("em celcius: \n");
    printf("%f", 5*(f-32)/9);
    return 0;

}