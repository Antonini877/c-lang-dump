#include <stdio.h>
int main(){
    float chico=1.5, ze=1.1;
    int anos=0;
    while(chico>ze){
        chico = chico + 0.2;
        ze = ze + 0.3;
        anos++;
    }
    printf("%d anos", anos);
    return 0;
}