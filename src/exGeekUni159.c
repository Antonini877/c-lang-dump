#include <stdio.h>
int main(){
    int matriz[5][5];
    for(int coluna=0; coluna<5; coluna++){
        int row = 0;
        for(row=0; row<5; row++){
            matriz[row][coluna] =0;
        }
    }

    matriz[0][0] = 1;
    matriz[1][1] = 1;
    matriz[2][2] = 1;
    matriz[3][3] = 1;
    matriz[4][4] = 1;

    for(int coluna=0; coluna<5; coluna++){
        int row = 0;
        for(row=0; row<5; row++){
           printf("%d ",  matriz[coluna][row]);
        }
        printf("\n");
    }
    return 0;
}