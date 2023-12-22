#include <stdio.h>
int main(){
    int entrada;
    printf("entrada: ");
    scanf("%d", &entrada);
    while(entrada>0){
        printf("%d\n",entrada%10);
        entrada = entrada/10;

    }
    return 0;
}