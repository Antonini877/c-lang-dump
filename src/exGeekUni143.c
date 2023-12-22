#include <stdio.h.>
int main(){
    int alunos[10][2];
    int min=0, max=0;
    int minid=0, maxid=0;
    for(int c = 0; c<2; c++){
        for(int y=0; y<10; y++){
            if(c==0){
            alunos[y][c] = y;
            }else{
                alunos[y][c] = y*y;
            }
        }
        }
        for(int c=0; c<10; c++){
            if(c==0){
                min = alunos[c][1];
                max = alunos[c][1];
                minid = 0;
                maxid = 0;
            }else{
                if(alunos[c][1]>max){
                    max = alunos[c][1];
                    maxid = c;
                }else if(alunos[c][1]<min){
                    min = alunos[c][1];
                    minid = c;
                }
            


            }


        
            
        }
        printf("o aluno id %d e com o tamanho %d e o maior\n", maxid, max);
        printf("o aluno id %d e com o tamanho %d e o menor\n", minid, min);
    
    return 0;
}