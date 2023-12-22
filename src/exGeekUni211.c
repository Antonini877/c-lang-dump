#include <stdio.h>
int QntValoresMaiores(int matriz[4][4], int referencia);
int main(){
    int matriz[4][4] = {{11,11,11,11}, {1,1,11,1}, {1,1,11,1}, {11,11,11,11}};
    int maioresQue10 = QntValoresMaiores(matriz, 10);
    printf("%d", maioresQue10);

    return 0;
}
int QntValoresMaiores(int matriz[4][4], int referencia){
    int contador = 0;
    for(int linha = 0; linha<4; linha++){
        for(int coluna = 0; coluna<4; coluna++){
            if(matriz[linha][coluna]>referencia){
                contador++;
            }
        }
    }
    return contador;
}