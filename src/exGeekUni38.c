#include <stdio.h>
int main(){
    char sexo;
    float altura;
    printf("sexo, m/f: ");
    scanf("%c", &sexo);
    printf("altura: ");
    scanf("%f", &altura);
    if(sexo ==109){
        printf("%.2f", (72.7*altura)-58);
    } else if(sexo == 102){
        printf("%.1f", (61.1*altura)-44.7);
    }

    return 0;



}