#include <stdio.h>
int main(){
    int segundos;
    printf("segundos: ");
    scanf("%d", &segundos);
    int horas = segundos/3600;
    int minutos = (segundos%3600)/60;
    int seg = (segundos%3600)%60;
    printf("%d horas, %d minutos e %d segundos", horas, minutos, seg);
    return 0;
}