#include <stdio.h>
int main(){
    int n;
    printf("numero: ");
    scanf("%d", &n);
    if(n>0){
        printf("%d",  n%10+(n/10)%10+(n/100)%10);
    } else{
        printf("numero invalido");
    }
    return 0;
}