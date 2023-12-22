#include <stdio.h>
int main(){
    int linhas;
    printf("linhas: ");
    scanf("%d", &linhas);
    int co = 0;
    for(int c=1; c<=linhas; c++){
        for(int j=1; j<=c; j++){
            co++;
            printf("%d ", co);
        }
        printf("\n");
    }
    return 0;
}