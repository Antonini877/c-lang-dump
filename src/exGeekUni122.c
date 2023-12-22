#include <stdio.h>
int main(){
int A[6] = {1,0,5,-2,-5,7};
int soma = A[0] + A[1] + A[5];
printf("%d e a soma\n", soma);
A[4] = 100;
for(int c = 0; c<6;c++){
    printf("%d\n", A[c]);
}
return 0;

    






}




