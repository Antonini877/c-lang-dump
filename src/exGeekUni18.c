# include <stdio.h>

int main(){
    float v;
    printf("valor de compra: ");
    scanf("%f", &v);
    printf("o valor de compra com desconto: %.2f \n", v-v*0.12);
    return 0;

}