#include <stdio.h>
int main(){
    int n, b=0;
    printf("numero: ");
    scanf("%d", &n);
    for(int c=2; c<n; c++){
        if(n%c==0){b++;}
    }
    if(b){
        printf("nao primo");
    }else{
        printf("primo");
    }
    return 0;
}