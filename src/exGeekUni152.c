#include <stdio.h>
int main(){
    int v[15], igual=0;

    for(int c=0; c<15; c++){
        printf("digite o valor da posicao %d: ", c);
        do{
            scanf("%d", &v[c]);
            igual = 0;
            for(int y=0; y<c; y++){
                if(v[c]==v[y]){
                    printf("digite outro: ");
                    igual = 1;
                }
            }
        }while(igual==1);
    }

    for(int c=0; c<15; c++){
        printf("%d\n", v[c]);
    }
    return 0;
}