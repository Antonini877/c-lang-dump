#include <stdio.h>
int main(){
    int uni[3] = {0};
    int m[3][3] = {{-2, 6, 1},{10, 1, -30}, {14,23,-22}};
    for(int coluna = 0; coluna<3; coluna++){
        for(int linha = 0; linha<3; linha++){
            uni[coluna] += m[linha][coluna];
        }

    }
    for(int c = 0; c<3; c++){
        printf("%d\n", uni[c]);
    }

}