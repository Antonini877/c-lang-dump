#include <stdio.h>
int main(){
    int k = 999, p, max=0;
    for(int y=100; y<=k;y++){
        int c = 100;
        for(c; c<=k;c++){
            p = c*y;
            if(p>99999){
                if(((p%10)*100000+((p/10)%10)*10000+((p/100)%10)*1000+((p/1000)%10)*100+((p/10000)%10)*10+((p/100000)%10))==p){
                    if(p>max){max = p;}
                }
            }else{
                if((((p)%10)*10000+((p/10)%10)*1000+((p/100)%10)*100+((p/1000)%10)*10+((p/10000)%10))==p){
                    if(p>max){max = p;}
                
                }
            }

        }
    }
    printf("%d", max);
    return 0;
}

