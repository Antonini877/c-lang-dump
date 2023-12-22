# include <stdio.h>

int main(){
    int v = 780000;
    int p = v*0.46;
    int s = v*0.32;
    int t = v-p-s;

    printf("%d, %d, %d", p, s, t );
    system("pause");
    return 0;
}