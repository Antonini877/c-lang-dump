#include <stdio.h>
#include <math.h>
int main(){
    float a,b;
    printf("cateto a: \n");
    scanf("%f", &a);
    printf("cateto b: \n");
    scanf("%f", &b);
    printf("%.5f", sqrt(pow(a,2)+pow(b,2)));
    return 0;

}