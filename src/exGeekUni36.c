#include <stdio.h>
int main(){
    float nota, nota2;
    printf("nota: ");
    scanf("%f", &nota);
    printf("nota: ");
    scanf("%f", &nota2);
    if((nota<=10 && 0<=nota)&&(nota2<=10 && 0<=nota2)){  
        printf("%.1f", (nota+nota2)/2);
    } else{
        printf("notas invalidas");
    }
    return 0;
}