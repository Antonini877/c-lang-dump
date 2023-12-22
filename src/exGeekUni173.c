#include <stdio.h>
int main(){
    int m[10][3] = {{6, 7, 9},
                    {5, 10, 2},
                    {3, 5, 9},
                    {7, 8, 10},
                    {10, 2, 1},
                    {7, 7, 7},
                    {2, 3, 1},
                    {8, 9, 6},
                    {10, 8, 10},
                    {10, 8, 1},
                    };
int pior1 = 0;
int pior2 = 0;
int pior3 = 0;
for(int aluno = 0; aluno<10; aluno++){
    if(m[aluno][0]<=m[aluno][1] && m[aluno][0]<m[aluno][2]){
        pior1++;
    }else if(m[aluno][1]<m[aluno][2] && m[aluno][1]<m[aluno][0]){
        pior2++;
    }else if(m[aluno][2]<m[aluno][1] && m[aluno][2]<m[aluno][0]){
        pior3++;
    }else{
        pior1++;
    }
}

printf("pior na 1: %d\npior na 2: %d\npior na 3:%d", pior1,pior2,pior3);
}