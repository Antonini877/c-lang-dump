#include <stdio.h>

int main(){
char n[4];
printf("numero: ");
scanf("%s", &n);
printf("%c\n", n[3]);
printf("%c\n", n[2]);
printf("%c\n", n[1]);
printf("%c\n", n[0]);
return 0;

}