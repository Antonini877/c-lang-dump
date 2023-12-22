#include <stdio.h>
int main(){
    int v1[5] = {1,2,2,4,5}, d=0, cc=0;
    int v2[5] = {6,7,8,2,2};
    int u[10] = {0};
    for(int c=0; c<10; c++){
        d = 0;
        for(int y=0; y<c; y++){
            if(u[y]==v1[c]&&c<5){
                d++;
            } else if(u[y]==v2[c-5]){
                d++;
            }


        }
        if(c<5&&!d){
            u[cc] = v1[c];
            cc++;
        } else if(c<10&&!d){
            u[cc] = v2[c-5];
            cc++;
        }
    }


    for(int c = 0; c<10; c++){
        if(u[c]){
            printf("%d\n", u[c]);
        }
    }
    return 0;
}