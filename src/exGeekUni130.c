#include <stdio.h>
int main(){
    float notas[15], ac=0;
    for(int c = 0; c<15; c++){
        printf("nota: ");
        scanf("%f", &notas[c]);
        ac += notas[c];
    }
    printf("%.2f", ac/15);
    return 0;
}