#include <stdio.h>
int main(){
    printf("1 - soma\n2 - sub\n3 - k\n4 - print\n\n:");
    int opcao;
    scanf("%d", &opcao);
    int m[2][2] = {{1,5}, {50, 100}};
    int m2[2][2] = {{0, 15}, {35, 500}};
    int m3[2][2];
    int k;
    switch(opcao){
        case 1: 
            for(int linha = 0; linha < 2; linha++){
                for(int coluna = 0; coluna < 2; coluna++){
                    m3[linha][coluna] = m[linha][coluna] + m2[linha][coluna];
                    printf("%d ", m3[linha][coluna]);
                }
                printf("\n");
            }
            break;
        case 2:
            for(int linha = 0; linha < 2; linha++){
                for(int coluna = 0; coluna < 2; coluna++){
                    m3[linha][coluna] = m[linha][coluna] - m2[linha][coluna];
                    printf("%d ", m3[linha][coluna]);
                }
                printf("\n");
            }
            break;
        case 3:
            
            printf("constante: ");
            scanf("%d", &k);
            for(int linha = 0; linha < 2; linha++){
                for(int coluna = 0; coluna < 2; coluna++){
                    m[linha][coluna] = m[linha][coluna] + k;
                    printf("%d ", m[linha][coluna]);
                }
                printf("\n");
            }
            printf("\n");
            for(int linha = 0; linha < 2; linha++){
                for(int coluna = 0; coluna < 2; coluna++){
                    m2[linha][coluna] = m2[linha][coluna] + k;
                    printf("%d ", m2[linha][coluna]);
                }
                printf("\n");
            }
            break;
        case 4:
            for(int linha = 0; linha < 2; linha++){
                    for(int coluna = 0; coluna < 2; coluna++){
                       
                        printf("%d ", m[linha][coluna]);
                    }
                    printf("\n");
                }
                printf("\n");
                for(int linha = 0; linha < 2; linha++){
                    for(int coluna = 0; coluna < 2; coluna++){
                        
                        printf("%d ", m2[linha][coluna]);
                    }
                    printf("\n");
                }
                break;

    }

    return 0;
}