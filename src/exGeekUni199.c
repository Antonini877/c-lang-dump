#include <stdio.h>
int fatorialDuplo(int n);
int main(){
    printf("%d", fatorialDuplo(5));
    return 0;
}
int fatorialDuplo(int n){
    int fat = n;
    for(int c=1; c<n; c += 2){
        fat *= c;
    }
    return fat;
}