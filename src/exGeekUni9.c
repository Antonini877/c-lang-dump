#include <stdio.h>
int main(){
    float milhas;
    printf("milhas: \n");
    scanf("%f", &milhas);
    printf("em km: \n");
    printf("%.3f", milhas*1.61);
    return 0;
}