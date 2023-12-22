#include <stdio.h>
int main(){
    int c = 1;
    int soma;
    int v =1;
    while(v==1){
        soma = 0;
        for(int d=1; d<=20; d++){
            if(c%d!=0){
                break;
            }else{
                soma= soma + 1;
            }
        }
        if(soma==20){
            printf("%d", c);
            v = 0;
        }
        c = c + 1;


    }
}