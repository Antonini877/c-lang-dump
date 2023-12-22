#include <stdio.h>
int main(){
    int n[5],min,max;
    for(int c=0; c<5; c++){
        printf("n: ");
        scanf("%d", &n[c]);
        if(c==0){
            min = c;
            max = c;
        }else{
            if(n[c]> max){ max= c;}
            else if(n[c]< min){min = c;}
        }
    }

    printf("min: %d\nmax: %d", min, max);
    return 0;
}