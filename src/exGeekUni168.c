#include <stdio.h>
int main(){
    int soma = 0;
    int m[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &m[i][j]);
        }
    }
   
    for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(j+i==2){
                    soma +=  m[i][j];
                }
        }
    }
    printf("soma: %d", soma);
    return 0;
}