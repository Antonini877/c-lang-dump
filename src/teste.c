#include <stdio.h>

int main(void){
while(1){
int numero;
scanf("%d", &numero);
printf("%d",numero);
if(numero<10){
break;
}
}
return 0;
}