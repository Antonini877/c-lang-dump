#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%d", &c);
    if(a>0){
        if((b==0)&&(c==0)){
            printf("%.1f", pow(a,2));
        }
        else if(c==0){
            printf("x: %.1f", (-b+b)/2*a);
            printf("x': %.1f", (-b-b)/2*a);
        } else if(b==0){
            printf("%.1f", sqrt(-c/a));
        } else{
            printf("x: %.1f\n", (-b + sqrt(pow(b,2)-4*a*c))/2*a);
            printf("x': %.1f\n", (-b - sqrt(pow(b,2)-4*a*c))/2*a);
        }
    } else{
        printf("nao e equacao de 2 grau.");
    }
    return 0;

}