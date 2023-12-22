#include <stdio.h>
int main(){
    float celcius;
    printf("em celcius: \n");
    scanf("%f", &celcius);
    printf("em F: \n");
    printf("%3.f \n", celcius*9/5+32);
    return 0;
}