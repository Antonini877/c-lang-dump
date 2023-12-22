#include <stdio.h>
int main(){
    int ac=0;
    int n = 2000000;
    for(int y = 1; y<n; y++){
        int b = 0;
        for(int c=2; c<y; c++){
        if(y%c==0){b++;}
    }
    if(!b){
        ac= ac+y;
    }
    }
    printf("%d\n", ac);
    return 0;
}