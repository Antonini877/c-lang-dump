#include <stdio.h>
int main(){
    int v[2];
    int *p = v; 
    v[0] = 11;
    v[1] = 22;
    for(int c=0; c<2; c++){
        printf("%d\n", *(p+c));
    }
   
    return 0;
}