#include <stdio.h>
int main(){
    int contagem = 10;
    while(contagem >= 0){
        printf("%d\n", contagem);
        contagem--;
    }
    printf("fim");
    return 0;
}