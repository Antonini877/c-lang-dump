#include <stdio.h>
int main(){
    int x = 5;
    int *p;
    p = &x;
    *p = 2;
    printf("%x\n", p);
    printf("%d", x);
    return 0;
}