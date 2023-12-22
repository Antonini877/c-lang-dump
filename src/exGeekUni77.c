#include <stdio.h>
int main(){
    int par;
    printf("numero: ");
    scanf("%d", &par);
    for(par; par>=0; par--){
        if(par%2==0&&par!=0){
            printf("%d\n", par);
        }
    }
    return 0;
}