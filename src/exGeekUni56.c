#include <stdio.h>

int main(){
    int a,b,c;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if(a>b&&b>c){
        printf("%d\n%d\n%d", c,b,a);
    }
    else if(b>a && a>c){
        printf("%d\n%d\n%d\n", c,a,b);
    }
    else if(a>c && c>b){
        printf("%d\n%d\n%d", b, c,a );
    }
    else if(c>a && a>b){
        printf("%d\n%d\n%d", b, a,c );
    }
    else if((c>b )&& (b>a)){
        printf("%d\n%d\n%d", a, b,c );
    }
    else if(b>c && c>a){
        printf("%d\n%d\n%d", a, c,b );
    }
    else{
        printf("tem numeros iguais");
    }
    return 0;



}