#include <stdio.h>
#define T 60
int segundos(int h, int m, int s);
int main(int argc, char *argv[]){
  
    printf("%d segundos", segundos(atoi(argv[0]), atoi(argv[1]), atoi(argv[2])));
    return 0;
}
int segundos(int h, int m, int s){
    return h*T*T+ m*T+s;
}