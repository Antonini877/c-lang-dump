#include <math.h>
#include <stdio.h>
int main(){
    int n;
    printf("digite um numero: ");
    scanf("%d", &n);
    if(n>0){
        printf("%.1f",sqrt(n));
    }else{
        printf("numero invalido");
    }
    return 0;
}