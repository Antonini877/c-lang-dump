#include <stdio.h>
int main(){
    for(int c=1000;c<=9999;c++){
        int a1 = c/100;
        int a2 = c%100;
        if((a1 + a2)*(a1 + a2) == c){
            printf("%d\n", c);
        }
    }
    return 0;
}