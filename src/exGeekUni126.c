#include <stdio.h>
int main(){
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    int ac = 0;
    for(int c = 0; c<10; c++){
        if(v[c]%2==0){
            ac++;
        }
    }
    printf("%d", ac);
    return 0;
}