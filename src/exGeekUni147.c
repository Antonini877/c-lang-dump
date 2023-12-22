#include <stdio.h>]
int main(){
    int v[10] = {1,2,3,4,5,6,7,8,9,10}, soma_par = 0, n_impar=0;

    for(int c=0; c<10 ;c++){
        if(v[c]%2==0){
            printf(" par: %d\n", v[c]);
            soma_par += v[c];
        } else{
            printf(" impar: %d\n", v[c]);
            n_impar++;
        }
    }
    printf("soma dos pares: %d\n", soma_par);
    printf("numero de impares: %d", n_impar);
    return 0;
}