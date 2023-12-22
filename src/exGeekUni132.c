#include <stdio.h>
int main(){
    int n[5],min=0,max=0;
    float ac=0;
    for(int c=0; c<5; c++){
        printf("n: ");
        scanf("%d", &n[c]);
        ac += n[c];
        if(c==0){
            min = n[c];
            max = n[c];
        }else{
            if(n[c]> max){ max= n[c];}
            else if(n[c]< min){min = n[c];}
        }
    }
    for(int c = 0; c<5; c++){
        printf("%d\n",n[c]);
    }
    printf("media: %.1f\n", ac/5);
    printf("min: %d\nmax: %d", min, max);
    return 0;
}