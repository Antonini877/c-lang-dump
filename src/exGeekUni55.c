#include <stdio.h>
#include <stdlib.h>

int main(){
    short int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10, pontos=0;
    short int r1, r2, r3, r4, r5;
    p1 = rand() % 101;
    p2 = rand() % 101;
    printf("%d + %d = ", p1 , p2);
    scanf("%d", &r1);
    if(r1==p1+p2){
        printf("acertou\n");
        pontos= pontos+1;
    }
    p3 = rand() % 101;
    p4 = rand() % 101;
    printf("%d + %d = ", p3 , p4);
    scanf("%d", &r5);
    if(r2==p3+p4){
        printf("acertou\n");
        pontos = pontos + 1;
    }
    p5 = rand() % 101;
    p6 = rand() % 101;
    printf("%d + %d = ", p5 , p6);
    scanf("%d", &r5);
    if(r3==p5+p6){
        printf("acertou\n");
        pontos= pontos + 1;
    }
    p7 = rand() % 101;
    p8 = rand() % 101;
    printf("%d + %d = ", p7 , p8);
    scanf("%d", &r4);
    if(r4==p7+p8){
        printf("acertou\n");
        pontos = pontos + 1;
    }
    p9 = rand() % 101;
    p10 = rand() % 101;
    printf("%d + %d = ", p9 , p10);
    scanf("%d", &r4);
    if(r5==p9+p10){
        printf("acertou\n");
        pontos= pontos +1;
    }
    printf("%d", pontos);
    return 0;

}