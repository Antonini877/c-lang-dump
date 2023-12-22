#include <stdio.h>
int main(){
    int ano;
   for(ano=1600;ano<2030;ano++){
        if((ano%4==0||ano%400==0)&&(ano%100!=0)){
            printf("ano bisexto %d\n", ano);
            
            }
    
    
    }
    return 0;
}