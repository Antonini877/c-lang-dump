#include <stdio.h>
int main(){
    int matriz[4][4];
    for (int i=0; i<4; i++){
        int c = 0;
        for(c; c<4; c++){
            scanf("%d", &matriz[i][c]);
        }
    }

    int max_line;
    int max_col;

     for (int i=0; i<4; i++){
        int c = 0;
        for(c; c<4; c++){
            if(c==0 && i==0){
                max_line = i;
                max_col = c;
            } else{
                if (matriz[i][c] > matriz[max_line][max_col]){
                    max_line = i;
                    max_col = c;
                }
            }
        }
    }
    printf("o maior valor e: %d na posicao linha %d e coluna %d", matriz[max_line][max_col], max_line+1, max_col+1);
    return 0;
}