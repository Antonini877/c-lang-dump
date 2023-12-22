#include <stdio.h>
void geraTrianguloLateral(int altura);
int main(){
    geraTrianguloLateral(11);
    return 0;
}
void geraTrianguloLateral(int altura){
    int alturaTrecho;
    for(int i=0;i<=altura*2;i++){
        alturaTrecho = i>altura? altura-(i-altura):i;
         for(int j = 0; j < alturaTrecho;j++){
            printf("*");
        }
        printf("\n");
    }
}