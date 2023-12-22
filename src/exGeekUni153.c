#include <stdio.h>
int main(){
    int num, num2;
    int tamanho_n, tamanho_n2;
    printf("numero: ");
    scanf("%d", &num);
    printf("numero 2: ");
    scanf("%d", &num2);

    if(num<10){
        tamanho_n = 1;
    } else if(num<100){
        tamanho_n = 2;
    } else if(num<1000){
        tamanho_n = 3;
    } else{
        tamanho_n = 4;
    }


    if(num2<10){
        tamanho_n2 = 1;
    } else if(num2<100){
        tamanho_n2 = 2;
    } else if(num2<1000){
        tamanho_n2 = 3;
    } else{
        tamanho_n2 = 4;
    }
    
    int n[tamanho_n];
    int n2[tamanho_n2];


    int c = 0;
    while(num>0){
        n[c] = num%10;
        c++;
        num = num/10;
    }

    c = 0;
    while(num2>0){
        n2[c] = num2%10;
        c++;
        num2 = num2/10;
    }

int g = 1;
int cc = 0;
for(int c=0; c<tamanho_n; c++){
    cc += n[c]*g;
    g *= 10;  
}

g = 1;
int cc2 = 0;
for(int c=0; c<tamanho_n2; c++){
    cc2 += n2[c]*g;
    g *= 10;  
}

printf("a soma dos dois numeros e %d", cc+cc2);



    return 0;
}