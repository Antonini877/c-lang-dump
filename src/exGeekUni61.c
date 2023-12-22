#include <stdio.h>

int main(){
    int dia,mes, ano;
    printf("dia: ");
    scanf("%d", &dia);
    printf("mes: ");
    scanf("%d", &mes);
    printf("ano: ");
    scanf("%d", &ano);
   int m[12] = {31,28,31,30,31, 30, 31, 31,30,31,30,31};
   if(mes>0&&mes<=12){
       if(dia>=0&&dia<=m[mes+1]){
           printf("existe");
       }
       if(ano%4==0|ano%40==0&&ano&100!=0&&mes==2){
           if(dia>=0&&dia<=29){
           printf("existe");
       }
       }
       return 0;
   }
}
