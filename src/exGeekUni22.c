# include <stdio.h>

int main(){
    int numero;
    float a,b,c;

    printf("numero: ");
    scanf("%d", &numero);
    a = numero%10;
    b = numero%100/10;
    c = numero%1000/100;
    printf("%.1f %.1f %.1f", a,b,c);
    return 0;

}