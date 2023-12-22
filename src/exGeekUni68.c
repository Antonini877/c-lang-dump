#include <stdio.h>

int main(){
    int c = 0, n=0, e;
    for(c;c<10;c++){
        printf("numero: \n");
        scanf("%d", &e);
        n = e + n;
    }
    printf("%d", n);
    return 0;
}