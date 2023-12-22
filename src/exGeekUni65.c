#include <stdio.h>

int main(){

for(int c=0; c<=100;c++){
    printf("%d\n", c);
}
int d  = 0;
while(d<=100){
    printf("%d\n", d);
    d = d+ 1;
}
int e = 0;
do{
    printf("%d\n", e);
    e = e + 1;
}while(e<=100);

    return 0;
}