#include <stdio.h>
int main(){
    int s, n, c = 0, soma=0;
    printf("sequencia: ");
    scanf("%d", &s);
    printf("numero: ");
    scanf("%d", &n);
    switch(s){
        case 1:
            for(c; c<=n; c++){
                soma = soma + c;
            }
            printf("%d", soma);
            break;
        case 2:
            for(c; c<=n; c++){
                if(c%2==0){
                    soma = soma - c;
                }
                else {
                    soma = soma + c;
                }
                
            }
            printf("%d", soma);
            break;
        case 3:
            for(c=1; c<=n; c++){
                if(c%2!=0){
                    soma = soma + c;
                }
                
            }
            printf("%d", soma);
            break;
    }
    return 0;
}