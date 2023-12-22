#include <stdio.h>
int main(){
    int n, ac=0;
    printf("numero: ");
    scanf("%d", &n);
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