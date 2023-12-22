#include <stdio.h>
void triangulo(int altura);
int main(){
    triangulo(11);
    return 0;
}

void triangulo(int altura){
    int base = altura*2-1;
    int espaco = ((float)base)/2.;
    int b = 1;
    for(int i = 0; i <altura; i++){
        for(int c = 0; c<espaco; c++){
            printf(" ");
        }
        for(int c = 0; c<b; c++){
            printf("*");
        }
        printf("\n");
        espaco--;
        b+=2;
        }
}