#include <stdio.h>

int main(){
    int dias;
    printf("dias:");
    scanf("%d", &dias);
    printf("valor: ");
    printf("%.2f", (dias*30)-dias*0.08);
    return 0;
}