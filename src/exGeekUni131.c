#include <stdio.h>
int main(){
    int nn=0;
    float ac=0, v[10];
    for(int c = 0; c<10; c++){
        printf("n: ");
        scanf("%f", &v[c]);
        if(v[c]>=0){
            ac+=v[c];
    }else{
        nn +=1;
        }
    }
        printf("soma dos positivos:%.1f\n", ac);
        printf("%d numeros negativos\n", nn);
        return 0;
}