#include <stdio.h>
int main(){
    int dado;
    printf("insira um numero: ");
    scanf("%d", &dado);
    int ne = dado;
    for(ne; ne>0; ne++){
        if((ne%17==0)||(ne%11==0)||(ne%13==0)){
            printf("%d", ne);
            break;
        }
        
    }
    return 0;
}