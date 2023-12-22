#include <stdio.h>
int main(){
    for(int mil=1000; mil>0; mil--){
        if((mil%5==0)||(mil%3==0)){
            printf("%d\n", mil);
        }
    }
    return 0;
}