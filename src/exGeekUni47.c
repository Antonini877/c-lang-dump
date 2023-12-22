#include <stdio.h>
int main(){
    int numero, divisao;
    printf("numero: ");
    scanf("%d", &numero);
    printf("quer dividir por 3 ou por 5: ");
    scanf("%d", &divisao);
    if(divisao==3){
        if((numero%3)!=0){
            printf("nao e divisivel por 3");
        } else{
            printf("e divisivel por 3");
        }
    } else if(divisao==5){
        if((numero%5)!=0){
            printf("nao e divisivel por 5");
        } else{
            printf("e divisivel por 5");
        }
    } else{
        printf("numero deve ser 3 ou 5.");
    }
return 0;

}