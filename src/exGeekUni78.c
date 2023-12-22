#include <stdio.h>
int main(){
    int impar;
    printf("numero: ");
    scanf("%d", &impar);
    for(int c = 1; c<=impar; c++){
        if(c%2!=0){
            printf("%d\n", c);
        }
    }
    return 0;
}