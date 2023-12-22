#include <stdio.h>
int main(){
    float joao,carlos;
    int tempo=0;
    carlos = 3;
    joao = 1;
    while(carlos>joao){
        carlos = carlos*1.02;
        joao = joao*1.05;
        tempo++;
    }
    printf("%d meses", tempo);
    return 0;
}