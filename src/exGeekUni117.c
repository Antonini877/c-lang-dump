#include <stdio.h>
int main(){
    int ac=0,n,be;
    printf("a: ");
    scanf("%d", &be);
    printf("b: ");
    scanf("%d", &n);
    for(be; be<n; be++){
        int b = 0;
        for(int c=2; c<be; c++){
        if(be%c==0){b++;}
    }
    if(!b){
        ac= ac+be;
    }
    }
    printf("%d\n", ac);
    return 0;
}