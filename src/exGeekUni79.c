#include <stdio.h>
int main(){
    int impar;
    printf("numero: ");
    scanf("%d", &impar);
    for(impar; impar>=0; impar--){
        if(impar%2!=0){
            printf("%d\n", impar);
        }
    }
    return 0;
}