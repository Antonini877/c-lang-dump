#include <stdio.h>
int superFatorial(int n);
int fatorial(int n);
int main(){
    printf("%d", superFatorial(4));
    return 0;
}
int superFatorial(int n){
    int fat = fatorial(n);
    for(int c=1; c<n; c++){
        fat *= fatorial(c);
    }
    return fat;
}
int fatorial(int n){
    int fat = n;
    for(int c=1; c<n; c++){
        fat *= c;
    }
    return fat;
}