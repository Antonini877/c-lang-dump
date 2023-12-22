#include <stdio.h>
void adversario();
void jogada();
void print_jogo();
int jogo[3][3] = {0};
//int jogo[3][3] = {{1,-1,-1},{0,0,0},{0,0,0}};
int main(){
    for(int turnos = 0; turnos< 5; turnos++){
     print_jogo();
    jogada();
    adversario();
    }
  
    return 0;
}
void adversario(){
    int cont=0, emb=-1;
    int joguei=0;
    int ziglinha = -1;
    int zigcoluna = -1;

        for(int jog = 2; jog>=0; jog--){
        for(int l=0; l<3; l++){
                for(int c=0; c<3; c++){
                    cont += jogo[l][c];
                    if(!jogo[l][c]){
                        emb = c;
                    }
                    if((cont>=jog||cont<=-jog)&&emb>=0&&!joguei){
                       
                        jogo[l][emb] = -1;
                        joguei=1;
                    }
                        
                }
            cont = 0;
            
        }
        
        emb = -1;
        for(int l=0; l<3; l++){
            for(int c=0; c<3; c++){
                    cont += jogo[c][l];
                    if(!jogo[c][l]){
                        emb = c;
                        
                            }
                    if((cont>=jog||cont<=-jog)&&emb>=0&&!joguei){
                        
                                jogo[emb][l] = -1;
                                joguei = 1;
                            }
                
                    }
                   
                    cont = 0;
                
            }
            
                int ldecre = 2;
                int ccresc = 0;
                while(ldecre>=0){
                 
              
                    cont += jogo[ldecre][ccresc];
                    if(!jogo[ldecre][ccresc]){
                        zigcoluna = ccresc;
                        ziglinha = ldecre;
                    }
                    if((cont>=jog||cont<=-jog)&&ziglinha>=0&&!joguei){
                        jogo[ziglinha][zigcoluna] = -1;
                        joguei=1;
                    }
                        
                
            
            
            ldecre--;
            ccresc++;
        }
        ziglinha = -1;
        zigcoluna = -1;
                ldecre=2;
                ccresc=2;
                while(ldecre>=0){
                   
              
                    cont += jogo[ldecre][ccresc];
                    if(!jogo[ldecre][ccresc]){
                        zigcoluna = ccresc;
                        ziglinha = ldecre;
                    }
                    if((cont>=jog||cont<=-jog)&&ziglinha>=0&&!joguei){
                        jogo[ziglinha][zigcoluna] = -1;
                        joguei=1;
                    }
                        
                
            
            
            ldecre--;
            ccresc--;
        }

        emb = -1;

        }

        }
void jogada(){

    int linha, coluna, ok = 0;
    do{
    printf("linha: ");
    scanf("%d", &linha);
    printf("coluna: ");
    scanf("%d", &coluna);
    if(jogo[linha][coluna]!=-1&&jogo[linha][coluna]!=1){
        ok = 1;
        jogo[linha][coluna] = 1;

    }else{
        printf("por favor, escolha outra posicao...\n");
    } 
    }while(!ok);
}

void print_jogo(){
    printf("\n\n");
    for(int linha = 0; linha < 3; linha++){
                    for(int coluna = 0; coluna < 3; coluna++){
                        
                        printf("%d ", jogo[linha][coluna]);
                    }
                    printf("\n");
                }

                printf("\n\n");
}
    