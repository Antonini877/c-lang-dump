#include <stdio.h>
int main(){
    int n1,n2;
    printf("dividendo: ");
    scanf("%d", &n1);
    printf("divisor: ");
    scanf("%d", &n2);
    if(n1%n2!=0){
        printf("erro");
    } else{
        printf("%d", n1/n2);
    }
    return 0;
}