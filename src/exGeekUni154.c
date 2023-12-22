#include <stdio.h>
int main(){
    float vetor[10]={10.5,9,8,7,6,5,4,3,2,1}, d;
    for(int y=0; y<10; y++){
        int c = 0;
        for(c = 0 ; c<10; c++){
            if(vetor[c]>vetor[c+1]){
                d = vetor[c];
                vetor[c] = vetor[c+1];
                vetor[c+1] = d;
            }
        }
    }

    for(int c=0; c<10; c++){
        printf("%f\n", vetor[c]);
    }
    return 0;
}