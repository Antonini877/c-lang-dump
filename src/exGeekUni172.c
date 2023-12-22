#include <stdio.h>
int main(){
    char respostas[10] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'};
    char alunos[5][10];
    int notas[5] = {0};
    for(int linha=0;linha<5;linha++){
        for(int coluna=0;coluna<10;coluna++){
            scanf(" %c", &alunos[linha][coluna]);
            //alunos[linha][coluna] = 'a';
            if(respostas[coluna]==alunos[linha][coluna]){
                notas[linha]++;
            }
        }
       

    }
    for(int g = 0; g<5; g++){
        printf("%d\n", notas[g]);
    }
    return 0;
}