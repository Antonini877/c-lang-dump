#include <stdio.h>
int main(){
    int n,i,j;
    printf("i: ");
    scanf("%d", &i);
    printf("j: ");
    scanf("%d", &j);
    printf("n: ");
    scanf("%d", &n);
    for(int c=0; c<n;c++){
        if(c%i==0||c%j==0){
            printf("%d\n", c);
        }
    }
    return 0;
}