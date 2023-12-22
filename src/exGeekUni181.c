#include <stdio.h>
int confere(int n);
int main(){
    int n = 0;
    printf("%d", confere(n));
    return 0;
}

int confere(int n){
    if(n>0){
        return 1;
    } else if(n<0){
        return -1;
    }else{
        return 0;
    }
}