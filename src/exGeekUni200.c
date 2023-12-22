#include <stdio.h>
int fatorialQuadruplo(int n);
int fatorial(int n);
int main(){
    printf("%d", fatorialQuadruplo(2));
    return 0;
}
int fatorialQuadruplo(int n){
    return (fatorial(2*n))/(fatorial(n));
}
int fatorial(int n){
    int fat = n;
    for(int c=1; c<n; c++){
        fat *= c;
    }
    return fat;
}