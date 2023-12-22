#include <stdio.h>
int main(){
    int v[5] = {1,2,3,4,5};
    int o;
    printf("o: ");
    scanf("%d", &o);
    switch(o){
        case 0: 
            break;
        case 1:
            for(int c=0; c<5; c++){
                printf("%d\n", v[c]);
            }
            break;
        case 2: 
            for(int c=4; c>=0; c--){
                printf("%d\n", v[c]);
            }
            break;
        default:
            printf("numero invalido");
            break;
    }
    return 0;
    
}