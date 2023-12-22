#include <stdio.h>
int main(){
    int N,classe; 
    float ac=0, aa=0,bb=0,cc=0, min,max;
    printf("N: ");
    scanf("%d", &N);
    float kwh[N];
    for(int c=0; c<N; c++){
        printf("kwh: ");
        scanf("%f", &kwh[c]);
        if(c==0){
            max = kwh[0]; 
            min = kwh[0];
            }
        if(kwh[c]>max){max = kwh[c];}
        if(kwh[c]<min){min = kwh[c];}
        printf("classe: ");
        scanf("%d", &classe);
        ac = ac + kwh[c];
        switch(classe){
            case 1:
                aa = aa + kwh[c];
                break;
            case 2:
                bb = bb + kwh[c];
                break;
            case 3:
                cc = cc + kwh[c];
                break;
        }
    }
    printf("a: %.1f\nb: %.1f\nc: %.1f\n", aa,bb,cc);
    printf("media: %.1f\n", ac/N);
    printf("min: %.1f\nmax: %.1f", min, max);
    return 0;
    
}