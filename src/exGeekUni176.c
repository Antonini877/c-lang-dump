#include <stdio.h>
int main(){
    int m[3][6] = {{22,4,23, 45, 67, 94},{4,57,64,2,1,87}, {23,54,76,45,8,777} };
    
    float soma2e4 = 0;

    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 6; coluna++){
            if(coluna+1%2!=0){
                printf("%d\n", m[linha][coluna]);
            }

            if(coluna+1==2||coluna+1==4){
                soma2e4 += m[linha][coluna];
            }
            if(coluna==5){
                m[linha][coluna] = m[linha][0]+m[linha][2];
            }
        }
    }

    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 6; coluna++){
            printf("%d ", m[linha][coluna]);
        }
        printf("\n");
    }

    printf("%f", soma2e4/6);
    return 0;
}