#include <stdio.h>
int main(){
    int m[3][3];
    int m2[3][3];
    int temp;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &m[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            //temp = m[i][j];
            m2[i][j] = m[j][i];
            //m[j][i] = temp;
            printf("%d ", m2[i][j]);
        }

        printf("\n");
    }
    return 0;
}