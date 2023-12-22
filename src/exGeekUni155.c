#include <stdio.h>
int main(){
    int v[10] = {1,2,3,4,5,6,7,8,9,10}, d;
    for(int c=0; c<5; c++){
        int y = 0;
        for(y = 0; y<5; y++){
             if(v[y]>v[y+1]){
                d = v[y];
                v[y] = v[y+1];
                v[y+1] = d;
            }
        }
    }

    for(int c=5; c<10; c++){
        int y = 5;
        for(y = 5; y<10; y++){
             if(v[y]<v[y+1]){
                d = v[y];
                v[y] = v[y+1];
                v[y+1] = d;
            }
        }
    }

    for(int c = 0; c<10; c++){
        printf("%d\n", v[c]);
    }
    return 0;
}