#include <stdio.h>



struct grafo{
    int matriz[3][3];
    int atual;
};

typedef struct grafo grafo;


int main(){
    grafo g;
    for(int linha = 0; linha<3; linha++){
        for(int coluna = 0; coluna<3; coluna++){
            g.matriz[linha][coluna] = 1;
        }
    }
    g.atual = 0;
    percorre(&g, 2);
    printf("%d", g.atual);
    return 0;
}

void percorre(grafo *g, int t){
    for(int nos_adj=0; nos_adj<3; nos_adj++){
        if(g->matriz[g->atual][nos_adj]&&nos_adj==t){
            g->atual = t;
        }
    }
}

