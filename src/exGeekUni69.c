#include <stdio.h>

int main(){
    int c = 0, n=0, e;
    for(c;c<10;c++){
        printf("numero: ");
        scanf("%d", &e);
        n = e + n;
    }
    printf("%.2f", (float)n/10);
    return 0;
}