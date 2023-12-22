#include <stdio.h>
#include<stdlib.h>

struct aluno{
    int rm;
    char repostas[10];
    int nota;
};
typedef struct aluno aluno;
    
int main(){
    char respostas[10] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'};
   aluno registros[3];
    for(int c = 0; c<3; c++){
        registros[c].nota = 0;
        printf("rm: ");
        scanf("%d", &registros[c].rm);
        for(int d=0; d<10; d++){
            printf("resposta %d do aluno %d:", d, registros[c].rm);
            scanf(" %c", &registros[c].repostas[d]);
            if(registros[c].repostas[d]==respostas[d]){
                registros[c].nota++;
            }
        }
    }

    for(int c=0; c<3; c++){
        printf("aluno %d\n", registros[c].rm);
        if(registros[c].nota>=6){
            printf("passou com nota: %d\n", registros[c].nota);
        }else{
            printf("não passou com nota: %d\n", registros[c].nota);
        }
    }

    
    return 0;
}



