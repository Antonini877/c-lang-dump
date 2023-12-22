#include <stdio.h>

int main(){
    int n;
    printf("numero: ");
    scanf("%d", &n);
    for(int c = 0; c<=n;c++){
        if(c%2==0){
            printf("%d\n", c);
        }
    }
    return 0;
}