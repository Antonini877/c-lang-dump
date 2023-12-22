#include <stdio.h>

int main(){
    int f;
    float n;
    printf("nota: ");
    scanf("%f", &n);
    printf("faltas: ");
    scanf("%d", &f);
    if(f<=20){
        if(n<=10&&n>=9){
            printf("A");
        }
        else if(n<=8.9&&n>=7.5){
            printf("B");
        }
        else if(n<=7.4&&n>=5){
            printf("C");
        }
        else if(n<=4.9&&n>=4){
            printf("D");
        }
        else{
            printf("E");
        }

    }
    else{
        if(n<=10&&n>=9){
            printf("B");
        }
        else if(n<=8.9&&n>=7.5){
            printf("C");
        }
        else if(n<=7.4&&n>=5){
            printf("D");
        }
        else if(n<=4.9&&n>=4){
            printf("E");
        }
        else{
            printf("F");
        }
    }
    return 0;
}