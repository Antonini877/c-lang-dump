#include <stdio.h>
int main(){
    int m[4][4];
    for(int i=0; i<4; i++) {
        int s = 0;
        for(s; s<4; s++) {
            m[i][s] = (i+1)*(1+s);
        }
    }

        for(int i=0; i<4; i++) {
        int s = 0;
        for(s; s<4; s++) {
           printf("%d ", m[i][s]);
        }
        printf("\n");
    }
    return 0;
}