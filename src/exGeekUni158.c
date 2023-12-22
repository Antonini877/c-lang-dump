#include <stdio.h>
int main(){
    int m[4][4];
    int maiores = 0;

    for(int c=0; c<4; c++){
        int v = 0;
        for(v; v<4; v++){
            printf("valor linha %d, coluna %d:", v, c);
            scanf("%d", &m[c][v]);
        }
    }

        for(int c=0; c<4; c++){
        int v = 0;
        for(v; v<4; v++){
            if(m[c][v]>10){
                maiores++;
            
            }
        }
    }
    printf(" %d" ,maiores);
    return 0;
}