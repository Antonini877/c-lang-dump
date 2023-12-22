#include <stdio.h>
int main(){
    int i[6];
    for(int c = 0; c<6; c++){
        do{
            printf("n: ");
            scanf("%d", &i[c]);
            if(i[c]%2==0){printf("numeros impares!\n");}
        }while(i[c]%2==0);
    }


    for(int c=5; c>=0; c--){
        printf("%d\n", i[c]);}
    return 0;
}