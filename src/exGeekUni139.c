#include <stdio.h>
int main(){
int f[10] = {1,2,3,4,5,6,7,8,9,10};
int ti = 0;
int im[10];
for(int c=0;c<10;c++){
    if(f[c]%2!=0){
        im[ti] = f[c];
        ti++;
    }
}
for(int c = 0; c<10; c+=2){
    printf("%d ", f[c]);
    printf("%d ", f[c+1]);
    printf("\n");
}
for(int c = 0; c<ti; c+=2){
    printf("%d ", im[c]);
    if(c+1<ti){
    printf("%d ", im[c+1]);
    printf("\n");}
}
return 0;


}