#include <stdio.h>

int main(){
    float preco;
    printf("preco velho: ");
    scanf("%f", &preco);
    if(preco<50){
        printf("%.2f", preco*1.05);
    }
    else if(preco>=50&&preco<=100){
        printf("%.2f", preco*1.10);
    }
    else{
        printf("%.2f", preco*1.15);
    }
    return 0;
}