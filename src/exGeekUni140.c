#include <stdio.h>
int main(){
    int a[10] = {2,34,2,11,23,64,3,6,87,93};
    int b[10] = {3,54,55,22,1,4,5,67,8,10};
    int C[10];
    for(int c=0; c<10; c++){
        C[c] = a[c] - b[c];
        printf("%d\n", C[c]);
    }
    return 0;
}