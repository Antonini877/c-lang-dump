#include <stdio.h>
int main(){
    int ve[10] = {0,0,0,0,0,0,0,0,0,0}, v;
    for(int c=0; c<10; c++){
        printf("v: ");
        scanf("%d", &ve[0]);

for(int r = 1; r<10; r++){
        int j = r;
  while (j > 0 && ve[j] < ve[j-1]) {
            int aux = ve[j];
            ve[j] = ve[j-1];
            ve[j-1] = aux;
            j -= 1;
    }
}
    }

    for(int c=0; c<10; c++){
        printf("%d\n", ve[c]);
    }
    
    return 0;


}