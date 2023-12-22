#include <stdio.h>
int main(){
    int vetor[7] = {0,2,0,3,4,0,5}, t;
    for(int y=0; y<7; y++){ 
        for(int c = 0; c<7; c++){
            if(vetor[c]==0){
                t = vetor[c+1];
                vetor[c+1] = 0;
                vetor[c] = t;
                
            }
        }
    }
    for(int c = 0; c<7; c++){
        if(vetor[c]){
        printf("%d\n", vetor[c]);}
    }
    system("gcc -S exGeekUni151.c");
    return 0;
}