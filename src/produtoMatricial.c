#include <stdio.h>
#define LINHAS_A 3
#define COLUNAS_A 2
#define LINHAS_B 2
#define COLUNAS_B 4
void produtoMatricial(int A[LINHAS_A][COLUNAS_A], int B[LINHAS_B][COLUNAS_B], int C[LINHAS_A][COLUNAS_B]);
int main(){ 
    int A[LINHAS_A][COLUNAS_A] = {{4,1}, {1,4}, {3,2}};
    int B[LINHAS_B][COLUNAS_B] = {{5,40,1,-2}, {25,2,-1,-3}};
    int C[LINHAS_A][COLUNAS_B] = {0};
    produtoMatricial(A, B, C);

    for(int linha=0; linha< LINHAS_A; linha++){
        for(int colunas = 0; colunas < COLUNAS_B; colunas++){
            printf("%d ", C[linha][colunas]);
        }
        printf("\n");
    }

    return 0;
}
void produtoMatricial(int A[LINHAS_A][COLUNAS_A], int B[LINHAS_B][COLUNAS_B],int C[LINHAS_A][COLUNAS_B]){
    for(int linhasA = 0; linhasA < LINHAS_A; linhasA++){
        for(int colunasB = 0; colunasB< COLUNAS_B; colunasB++){
            int elemento = 0;
            for(int colunasA = 0; colunasA < COLUNAS_A; colunasA++){
                elemento += A[linhasA][colunasA] * B[colunasA][colunasB];
            }
            C[linhasA][colunasB] = elemento;
        }
    }



}