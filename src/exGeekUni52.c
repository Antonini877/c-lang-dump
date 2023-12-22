#include <stdio.h>
int main(){
    float km, l, kmpl;
    printf("km: ");
    scanf("%f", &km);
    printf("litros: ");
    scanf("%f", &l);
    kmpl = km/l;
    if(kmpl<8){
        printf("venda o carro, %.1f", kmpl);
    } else if(kmpl>12){
        printf("super economico, %.1f", kmpl);
        } else{
            printf("meeeh, %.1f", kmpl);
        }
    return 0;


}