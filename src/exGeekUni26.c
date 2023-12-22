#include <stdio.h>
#include <math.h>


int main(){
int x,y;
printf("x: ");
scanf("%d", &x);
printf("y: ");
scanf("%d", &y);
float d = distancia(x, y);
printf("%.2f", d);
return 0;

}

int distancia(int x, int y){
return sqrt(pow(x,2)+pow(y,2));
}