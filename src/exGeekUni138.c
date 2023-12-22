#include <stdio.h>
int main(){
    float vetor[50];
    for(int c = 0; c<50; c++){
        vetor[c] = (c+5*c)%(c+1);
        printf("%.1f\n", vetor[c]);
    }
    return 0;
}