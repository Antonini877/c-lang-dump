#include <stdio.h>
int main(){
    int digitadoI, digitadoF, acumuladorP=0;
    long int acumuladorI=1;
    printf("inicio: ");
    scanf("%d", &digitadoI);
    printf("final: ");
    scanf("%d", &digitadoF);
    for(digitadoI; digitadoI<=digitadoF; digitadoI++){
        if((digitadoI%2==0)&&digitadoI!=0){
            acumuladorP = acumuladorP + digitadoI;
        } else if((digitadoI%2!=0)&&digitadoI!=0){
            acumuladorI = acumuladorI * digitadoI;
        }
    }
    printf("soma par: %d\nmultiplicacao impar: %d", acumuladorP, acumuladorI);
    return 0;
}