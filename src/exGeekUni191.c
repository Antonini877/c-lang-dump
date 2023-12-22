#include <stdio.h>
void desenhaLinha(int numeroDeLinhas);
int main(){
    int nLinhas;
    printf("numero de linhas: ");
    scanf("%d",&nLinhas);
    desenhaLinha(nLinhas);
    return 0;
}
void desenhaLinha(int numeroDeLinhas){
    for(int i = 0; i < numeroDeLinhas; i++) {
        printf("=");
    }
}