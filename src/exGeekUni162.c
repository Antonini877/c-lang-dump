#include <stdio.h>
int main(){
    int m[5][5];
    int x;
    int linhatem, colunatem;
    printf("valor x: ");
    scanf("%d", &x);
    for(int linha=0; linha<5; linha++){
        int coluna = 0;
        for(coluna=0; coluna<5; coluna++){
            scanf("%d", &m[linha][coluna]);
        }
    }
    int tem = 0;
    for(int linha=0; linha<5; linha++){
        int coluna = 0;
        for(coluna=0; coluna<5; coluna++){
            if(m[linha][coluna] == x){
                tem = 1;
                colunatem = coluna;
                linhatem = linha;
            }
        }
    }
    if(tem){
        printf("sim, linha %d, coluna %d", linhatem+1, colunatem+1);
    } else{
        printf("nao");
    }
    return 0;
}
