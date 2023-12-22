#include <stdio.h>
int main(){
    int numero, c=1, ca=0, n;
    printf("numero: ");
    scanf("%d", &numero);
    do{
        n = c+ca;
        ca = c;
        c = n;
        printf("%d\n", n);

    }while(n<numero);
    return 0;
}