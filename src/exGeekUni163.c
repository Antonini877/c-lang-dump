#include <stdio.h>
int main(){
    int a[4][4];
    int b[4][4];
    int C[4][4];


    for(int c=0; c<4; c++){
        int d = 0;
        for(d; d<4; d++){
            printf("a: ");
            scanf("%d", &b[c][d]);
            printf(" b: ");
            scanf("%d", &a[c][d]);
        }
    }
    for(int c=0; c<4; c++){
        for(int d=0; d<4; d++){
            if(a[c][d]>b[c][d]){
                C[c][d] = a[c][d];
        }else{
            C[c][d] = b[c][d];
        }
        }
    }

        for(int c=0; c<4; c++){
        int d = 0;
        for(d; d<4; d++){
            printf("%d ", C[c][d]);
        }
        printf("\n");
        }
    return 0;
}