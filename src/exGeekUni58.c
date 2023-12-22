#include <stdio.h>
int main(){
    int c;
    float n;
    printf("codigo: ");
    scanf("%d", &c);
    printf("numero: ");
    scanf("%f", &n);
    switch(c){
        case 100:
            printf("%.2f reais", n*1.20);
            break;
        case 101:
            printf("%.2f reais", n*1.30);
            break;
        case 102:
            printf("%.2f reais", n*1.5);
            break;
        case 103:
            printf("%.2f reais", n*1.20);
            break;
        case 104:
            printf("%.2f reais", n*1.7);
            break;
        case 105:
            printf("%.2f reais", n*2.2);
            break;
        case 106:
            printf("%.2f reais", n);
            break;
        default:
            printf("codigo invalido");
            break;
    }
    return 0;
}