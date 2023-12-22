#include <stdio.h>
#include <math.h>
int main(){
float A[10];
float B[10];
for(int c=0; c<10; c++){
    printf("valor A[%d]:", c);
    scanf("%f", &A[c]);
    B[c] = pow(A[c], 2);
}
for(int c = 0; c<10; c++){
    printf("B[%d]: %.1f\n", c, B[c]);
}
return 0;


}