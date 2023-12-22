#include<stdio.h>
void geraLinhas(int nLinhas);
int main(){
    geraLinhas(100);
    return 0;
}
void geraLinhas(int nLinhas){
    for(int i = 0; i < nLinhas;i++){
        for(int j = 0; j <= i;j++){
            printf("!");
        }
        printf("\n");
    }
}