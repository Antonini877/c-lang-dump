#include <stdio.h>
int main(){
    int n;
    printf("n: ");
    scanf("%d", &n);
    for(int c = 0; c<=n;c++){
        printf("%d\n", c);
    }
    return 0;
}