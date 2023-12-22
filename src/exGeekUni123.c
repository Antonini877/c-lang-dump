#include <stdio.h>
int main(){
    int v[6];
    for(int c = 0; c<6; c++){
        printf("numero: ");
        scanf("%d", &v[c]);
    }
    for(int c = 0; c<6; c++){
        printf("%d\n", v[c]);
    }
    return 0;
}