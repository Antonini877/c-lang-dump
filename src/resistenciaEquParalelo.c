#include <stdio.h>
int main(){
    int c = 1;
    do{
        short int n_r; 
        float valor, soma=0;
        printf("quantos resistores paralelos o seu circuito possui?: ");
        scanf("%d", &n_r);
        for(int c=1; c<=n_r;c++){
            printf("resistor %d: ", c);
            scanf("%f", &valor);
            soma = soma + 1/valor;
        }
        printf("sua resistencia equivalente e %f OHMS\n", 1/soma);
        printf("deseja continuar? 0/1: ");
        scanf("%d", &c);
        
    }while(c==1);

    printf("fim do programa");
    return 0;
}