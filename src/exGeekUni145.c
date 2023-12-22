#include <stdio.h>
int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int c=0; c<10; c++){
        int mult = 0;
        int y = 1;
        for(y; y<=vetor[c]; y++){
            if(vetor[c]%y==0){
                mult++;
            }
        }
        if(mult==2){
            printf("%d na posicao %d\n", vetor[c], c);

        }



    }
    return 0;
}