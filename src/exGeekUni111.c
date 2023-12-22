#include <stdio.h>
int main(){
    int a;
    float r;
    printf("ano: ");
    scanf("%d", &a);
    if(a==1995){r = 2000.0;}
    else if(a==1996){r = 2000*1.015;}
    else{
        float k = 2000*1.015;
    
        for(int c=0; c<=(a-1996); c++ ){
            k = k*2;

        }
        r = k;
    }
    printf("%.2f",r);
    return 0;

}
