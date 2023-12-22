#include <stdio.h>
#include <math.h>
int main(){
     int a=1,b=1,c=1;
     for(a; a<=1000; a++){
         b = 1;
         for(b; b<=1000;b++){
             c = 1;
             for(c; c<=1000;c++){
                 if(((pow(a,2)+pow(b,2))==pow(c,2))&&((a+b+c)==1000)){
                     printf("a: %d\nb: %d\nc: %d\n", a, b, c);
                 }
                 }
             }
         }
          return 0;
     }
     
