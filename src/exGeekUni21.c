# include <stdio.h>

int main(){
    char c;
    printf("letra: ");
    scanf("%c", &c);
    if(c<90){
        printf("letra maiuscula: %c", c+32);
    } else{
    printf("letra maiuscula: %c", c-32);}
    return 0;

}