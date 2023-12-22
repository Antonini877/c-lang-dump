#include <stdio.h>
int main(){
    int s=0, a=1, ac=0;
    while(1){
        if((a+ac)<4000000){
        s = a+ac;
        ac = a;
        a = s;
        printf("%d\n", s);}
        else{
            break;
        }
    }
    return 0;
}