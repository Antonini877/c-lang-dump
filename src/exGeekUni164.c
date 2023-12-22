#include <stdio.h>
int main(){
    int m[10][10];

    for(int i=0; i<10;i++){
        for(int j=0; j<10;j++){
            if(i>j){
                m[i][j] = 2*i + 7*j;
            } else if(i==j){
                 m[i][j] = 3 * (i*i) -1;
            } else{
                m[i][j] = 4 * (i*i*i) - 5 * (j*j);
            }
            printf("%d      ", m[i][j]);
        }
        printf("\n");
    }

    return 0; 
}