#include <stdio.h>

int main(){
    int anosT, idade;
    printf("sera que pode se aposentar?\n");
    printf("idade: ");
    scanf("%d", &idade);
    printf("anos de trabalho: ");
    scanf("%d", &anosT);
    if((idade>=65)||(anosT>=30)||((idade>=60)&&(anosT>25))){
        printf("sim, voce pode se aposentar.");
    } else{
        printf("ainda nao.");
    }
    return 0;
}