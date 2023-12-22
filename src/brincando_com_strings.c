#include <stdio.h>
#include <string.h>
#define MAX 50


int main(){
    char str[MAX] = "oi!";
    char str2[MAX];

    strcpy(str2, str);

    printf("%s\n", str2);

    printf("%d\n", strlen(str2));

    strcat(str, str2);
    
    printf("%s\n", str);
    
    printf("%d", strcmp("oi!", str2));
    return 0;
}
