#include <stdio.h>

int main(void){
    int vetor[5] = {15, 20, 10, 5, 3};
    int vetor2[5] = {10, 10, 13, 5, 3};
    int res[5], c, i;
    for(c=0; c<6; c++){
    i = vetor[c] * vetor2[c];
    res[c] = i;

    }
    for(c=0; c<6; c++){
    printf("%d\n", res[c]);}
    return 0;
}