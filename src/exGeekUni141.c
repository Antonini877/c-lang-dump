#include <stdio.h>
int main(){
    int a[5] = {1,2,3,4,5}, ac=0;
    int b[5] = {6,7,8,9,10}, bc=0;
    int C[10];
    for(int c=0;c<10;c++){
        if(c%2==0){
            C[c] = a[ac];
            ac++;
        }else{
            C[c] = b[bc];
            bc++;
        }
        printf("%d\n", C[c]);
    }
    return 0;



}