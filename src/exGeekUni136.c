#include <stdio.h>
int main(){
    int v[5] = {1,-2,3,-4,5};
    for(int c = 0; c<5;c++){
        if(v[c]<0){
            v[c] = 0;
        }
        printf("%d\n", v[c]);
    }
    return 0;
}