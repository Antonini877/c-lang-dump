#include <stdio.h>

int main(){
    int n, n2;
    printf("numero: ");
    scanf("%d", &n);
    printf("numero 2: ");
    scanf("%d", &n2);
    if(n>n2){
        printf("%d, diferenca: %d ", n, n-n2);
    } else {
        printf("%d, diferenca: %d", n2, n2-n);
    }
    return 0;

}