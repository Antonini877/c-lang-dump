#include <stdio.h>

int main(){
    short int idade;
    printf("idade: ");
    scanf("%d", &idade);
    if(idade<=7 && idade>=5){
        printf("infantil A");
    }
    else if(idade>=8&&idade<=10){
        printf("infantil B");
    }
    else if(idade>=11&&idade<=13){
        printf("juvenil A");
    }
    else if(idade>=14&&idade<=17){
        printf("juvenil B");
    }
    else if(idade>=18){
        printf("senior");
    }
    return 0;

    

}