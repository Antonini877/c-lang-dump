#include <stdio.h>
int main(){
    int v[10] = {2,3,4,5,6,7,8,9,11,13};
    int o, s=0;
    printf("o: ");
    scanf("%d", &o);
    for(int c = 0; c<10; c++){
        if(o%v[c]==0){
            printf("%d divisivel por %d\n", o, v[c]);
            s++;
        }
    }
    printf("%d",s);
    return 0;
}