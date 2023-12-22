#include <stdio.h>
int main(){
    float al[5][4] = {{0.0, 5.0 , 7.0, 0.0},
                        {1.0, 9.0, 7.0, 0.0},
                        {2.0, 7.0, 6.0, 0.0},
                        {3.0, 4.0, 5.0, 0.0},
                        {4.0, 10.0, 2.0, 0.0}};
    int maior = 0;
    for(int c=0; c<5; c++){
        al[c][3] = al[c][1] + al[c][2];
        if(al[c][3]>al[maior][3]){
            maior = c;
        }
    }
    printf("a matricula %.f tem a maior media de %f", al[maior][0],al[maior][3]);
    return 0;
}