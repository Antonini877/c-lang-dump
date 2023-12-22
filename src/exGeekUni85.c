#include <stdio.h>
int main(){
    float nota, n_notas=0, ac=0;
    while(nota!=-1){
        printf("nota: ");
        scanf("%d", &nota);
        n_notas++;
        ac = ac+nota;
    }
    printf("%.1f", ac/n_notas);
    return 0;
}