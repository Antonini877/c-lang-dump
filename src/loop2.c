#include <stdio.h>

int main(void){
    int a,b;
    while(1){
        printf("digite um valor em celcius\n");
        scanf("%d", &a);
        printf("em kelvin seria:");
        printf("%d\n", a+273);
        printf("quer continuar: ");
        scanf("%d", &b);
        if(b==0){
            break;
        }

    }
    return 0;
}