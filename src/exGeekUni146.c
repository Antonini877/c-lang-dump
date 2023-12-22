#include <stdio.h>
int main(){
    int v1[10] = {1,2,3,4,5,6,7,8,9,10};
    int v2[10] = {0}, vc2=0;
    int v3[10]= {0}, vc3 = 0;

    for(int c = 0; c<10; c++){
        if(v1[c]%2==0){
            v2[vc2] = v1[c];
            vc2++;
        } else{
            v3[vc3] = v1[c];
            vc3++;
        }

    }
    puts("vetor par: \n");
    for(int c = 0; c< 10; c++){
        if(v2[c]){
        printf("%d\n", v2[c]);}
    }
    puts("vetor impar: \n");
    for(int c = 0; c< 10; c++){
        if(v3[c]){
        printf("%d\n", v3[c]);}
    }
    return 0;
}