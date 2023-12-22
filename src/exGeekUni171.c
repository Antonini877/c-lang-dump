#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int repetido;
     srand(time(NULL));
    int m[5][5];
    int a, b, x;
    for(int linha = 0; linha < 5; linha++){
        for(int coluna = 0; coluna < 5; coluna++){
            do{
                repetido = 0;
               
                x = rand() % 99;
                a = 0;
                for(a; a<=linha; a++){
                    b = 0;
                    for(b; b<=coluna; b++){
                        if(x==m[a][b]){
                            repetido = 1;
                            
                            
                        }
                    }
                }



            }while(repetido);
            m[linha][coluna] = x;
            
        }
    }

    for(int linha = 0; linha < 5; linha++){
        for(int coluna = 0; coluna < 5; coluna++){
            printf("%d ", m[linha][coluna]);
        }
        printf("\n");
    }



    return 0;
}