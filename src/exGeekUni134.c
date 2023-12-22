#include <stdio.h>
int main(){
    int v[10] = {1,2,3,10,10,10,10,10,10,10};
    for(int c = 0; c<10; c++){
        for(int x = c + 1; x<10; x++){
            if(v[x]==v[c]){
               v[x] = 0;
              
            }
        }
    }
    for(int c = 0; c<10; c++){
        if(v[c]){
        printf("%d\n", v[c]);}
    }
    return 0;
}