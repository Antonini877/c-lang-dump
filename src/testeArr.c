#include <stdio.h>
int main(){
    //printf("%d", sizeof(short));
    int ar[3];
    printf("%d e %d\n", (&ar[1]- &ar[0]), (&ar[2]- &ar[1]));
    printf("%d, %d, %d\n", &ar[0], &ar[1], &ar[2]);
    int *p;
    p = (int)&ar[2]+4;
    *p = 1111;
    printf("%d\n", ar[3]);
    printf("%d e %d", p, &ar[3]);
    return 0;
}