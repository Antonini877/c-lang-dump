#include <stdio.h>
float f(float c);
int main(){
    float c = 0.0;
    printf("%.1f em F seria %.1f", c, f(c));
}
float f(float c){
    return c*(9.0/5.0)+32;
}