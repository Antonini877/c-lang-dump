#include <stdio.h>
int main(){
    int v[6];
    for(int c = 0; c<6; c++){
        printf("n: ");
        scanf("%d", &v[c]);
    }
    for(int y = 5; y>=0; y--){
        printf("%d\n", v[y]);
    }
    return 0;

}