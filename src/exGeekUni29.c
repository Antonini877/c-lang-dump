#include <stdio.h>
int main(){
    int n1,n2;
    printf("digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("digite o segundo numero: ");
    scanf("%d", &n2);
    if(n1>n2){
        printf("%d", n1);
    } else{
        printf("%d", n2);
    }
    return 0;
}