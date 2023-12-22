#include <stdio.h>
char data(char d[11]);
int main(){
    char s[10] = "01/07/2000";
    data(s);
    return 0;
}

char data(char d[11]){
    int dia = (d[0]-48)*10+ d[1]-48;
    int mes = (d[3]-48)*10+ d[4]-48;
    int ano = (d[6]-48)*1000+( d[7]-48)*100+( d[8]-48)*10+ (d[9]-48);
   
    printf("%d de ", dia);
    switch(mes){
        case 1:
        printf("Janeiro");
        break;
        case 2:
        printf("Fevereiro");
        break;
        case 3:
        printf("Marco");
        break;
        case 4:
        printf("Abril");
        break;
        case 5:
        printf("Maio");
        break;
        case 6:
        printf("Junho");
        break;
        case 7:
        printf("Julho");
        break;
        case 8:
        printf("Agosto");
        break;
        case 9:
        printf("Setembro");
        break;
        case 10:
        printf("Outubro");
        break;
        case 11:
        printf("Novembro");
        break;
        case 12:
        printf("Dezembro");
        default:
        printf("?");

    
    }
    printf(" de %d", ano);
}