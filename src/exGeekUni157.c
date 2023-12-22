#include <stdio.h>
int fatorial(int n){
    if(n==0){return 1;}
    int f = 1;
    for(n; n>0; n--){
        f *= n;
    }
    return f;
}

int main(){
    int l;
    printf("linhas: ");
    scanf("%d", &l);
    int linha_atual = 0;
    for(linha_atual; linha_atual<=l; linha_atual++){
        int y =0;
        for(y; y<=linha_atual; y++){
            if(y==linha_atual){
                printf("1 ");
            } else{
           printf("%d ", fatorial(linha_atual)/(fatorial(y)*fatorial(linha_atual-y)));}
        }
    printf("\n");

    }

   
    return 0;
}