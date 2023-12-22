#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    short int o;
    printf("numero a: ");
    scanf("%f", &a);
    printf("numero b: ");
    scanf("%f", &b);
    printf("numero c: ");
    scanf("%f", &c);
    printf("1 - geometrica\n2 - ponderada\n3 - harmonica\n4 - aritmetica\nr: ");
    scanf("%d", &o);
    switch (o)
    {
    case 1:
        printf("%.1f", cbrt(a*b*c));
        break;
    case 2:
        printf("%.1f", (a+b*2+c*3)/6);
        break;
    case 3:
        printf("%.1f", 1/(1/a+1/b+1/c));
        break;
    case 4:
        printf("%.1f", (a+b+c)/3);
        break;

    }
    return 0;
}