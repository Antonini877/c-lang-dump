#include <stdio.h>
int main(){
    int v1[10] = {7,7,7,7,7,7,7,8,9,10};
    int v2[10] = {7,7,7,7,7,12,13,14,15,10};
    int inter[10] = {0}, inter_c=0, a=0;

    for(int c=0; c<10; c++){


        for(int y=0; y<10;y++){
            a = 0;
            if(v1[c]==v2[y]){
                for(int g = 0; g<inter_c; g++){
                    if(v1[c]==inter[g]){
                        a++;
                    }
                }
                if(!a){
                    inter[inter_c] = v1[c];
                    inter_c++;
                }


            }

        }
    }
    for(int c=0; c<inter_c; c++){
        printf("%d\n", inter[c]);
    }
    return 0;


}