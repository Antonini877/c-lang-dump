#include <stdio.h>
int main(){
    int par;
    printf("numero: ");
    scanf("%d", &par);
    for(int c = 0; c<=par; c++){
        if(c%2==0&&c!=0){
            printf("%d\n", c);
        }
    }
    return 0;
}