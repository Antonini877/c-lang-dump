#include <stdio.h>
int main(){
    int pares[6];
    for(int c = 0; c<6; c++){
        do{
            printf("n: ");
            scanf("%d", &pares[c]);
            if(pares[c]%2!=0){printf("numeros pares!\n");}
        }while(pares[c]%2!=0);
    }


    for(int c=5; c>=0; c--){
        printf("%d\n", pares[c]);}
    return 0;
}