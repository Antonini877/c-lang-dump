#include <stdio.h>
int main(){
    int v[8] = {1,5,55,3,4,43,20,-1};
    int x,y, ac=0;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    for(int c=0; c<8; c++){
        if(c==y||c==x){
            ac += v[c];
        }
    }
    printf("%d", ac);
    return 0;

}