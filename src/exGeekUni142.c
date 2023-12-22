#include <stdio.h>
int main(){
    float a[5]= {1,2,3,4,5};
    float b[5] = {2.3,3.4,2,7.7,3};
    float ac = 0;
    for(int c=0; c<5;c++){
        ac += a[c]*b[c];
    }
    printf("%.2f", ac);
    return 0;

}