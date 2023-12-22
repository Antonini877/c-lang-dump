#include<stdio.h>
int main(){
    int m[4][4];
    for(int linha = 0; linha < 4; linha++){
        for(int coluna = 0; coluna < 4; coluna++){
            scanf("%d",&m[linha][coluna]);
        }
    }
    for(int linha = 0; linha < 4; linha++){
        for(int coluna = 0; coluna < 4; coluna++){
            if(coluna>linha){
                m[linha][coluna] = 0;
            }
            if(m[linha][coluna]){
                printf("%d ",m[linha][coluna]);
            }
        }
        printf("\n");
    }

    return 0;
}