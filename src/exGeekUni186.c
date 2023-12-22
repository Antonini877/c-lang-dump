#include <stdio.h>
#include <math.h>
float hipotenusa(float c1, float c2);
int main(){
    float cateto1 = 7;
    float cateto2 = 21;
    printf("%.3f", hipotenusa(cateto1, cateto2));
    return 0;
}
float hipotenusa(float c1, float c2){
    return sqrt(c1*c1 + c2*c2);
}