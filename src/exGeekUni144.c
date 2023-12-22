#include <stdio.h>
int main(){
    int vetor[100];
    for(int c = 0; c<100; c++){
        vetor[c] = 0;
    }
    int c = 0;
    int cv = 0;
    while(!vetor[99]){
        
        if(c%7!=0||c%10==7){
            vetor[cv] = c;
            cv++;
            
        }
        c++;
    }
    for(int c = 0; c<100; c++){
        printf("%d\n", vetor[c]);
    }
    return 0;
}