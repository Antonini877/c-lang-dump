#include <stdio.h>
int main(){
    int d, cem=0, cinquenta=0, vinte=0, dez=0,cinco=0, um=0;
    printf("quantia: ");
    scanf("%d", &d);
    while(d>0){
        if(d>=100){
            cem++;
            d = d - 100;
        } else if(d>=50){
            cinquenta = cinquenta + 1;
            d = d - 50;
        } else if(d>=20){
            vinte++; 
            d = d - 20;

        } else if(d>=10){
            dez++;
            d = d - 10;
        } else if(d>=5){
            cinco++;
            d = d - 5;
        }else if(d>0){
            um++;
            d = d - 1;
        }
        

    }
    printf("cem: %d\ncinquenta: %d\nvinte: %d\ndez: %d\ncinco: %d\num: %d", cem, cinquenta, vinte, dez, cinco, um);
    return 0;

}