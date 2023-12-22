#include <stdio.h>
#include <Math.h>
int q(int n);
int main(){
    int v = 81;
    if(q(v)){
        printf("e quadrado perfeito");
    }else{
        printf("nao e");
    }
    return 0;
}
int q(int n){
   for(int c = 0; c<(n>>1)+1; c++){
       if(c*c==n){
           return 1;
       }
   }
   return 0;
}