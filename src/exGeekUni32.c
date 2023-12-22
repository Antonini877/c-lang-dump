#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("numero: ");
    scanf("%d", &n);
    if(n>0){
        printf("%.1f\n", pow(n, 2));
        printf("%.1f", sqrt(n));

    }
    return 0;
}