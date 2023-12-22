#include <stdio.h>
int main(){
    int vetor1[5] = {1,1,2,3,4};
    int vetor2[5] = {1,1,5,4,7};

    printf("soma: \n");

    for(int c=0; c<5; c++){
        printf("%d\n", vetor1[c]+vetor2[c]);
    }
    printf("\n");
    printf("produto: \n");

    for(int c=0; c<5; c++){
        printf("%d\n", vetor1[c]*vetor2[c]);
    }

    int b=0;


    printf("\n");
    printf("subtracao: \n");

    for(int c=0; c<5; c++){
        b = 0;
        for(int y = 0; y<c; y++){
            if(vetor1[c]==vetor2[y]){
                b++;
            }
        }
        if(!b){
            printf("%d\n", vetor1[c]- vetor2[c]);
        }
    }


    printf("\n");
    printf("elementos comuns: \n");
    int v_i[10], cvi=0, b2=0;
    for(int c = 0; c<5; c++){
        b2 = 0;
        for(int y=0; y<5; y++){
            if(vetor1[c]==vetor2[y]){
                for(int g=0; g<cvi; g++){
                    if(vetor1[c]==v_i[g]){
                        b2++;
                    }
                }
                if(!b2){
                    v_i[cvi] = vetor1[c];
                    printf("%d\n", v_i[cvi]);
                    cvi++;


                }
            }
        }
    }
    
    
    printf("\n");
    printf("uniao: \n");

int b3=0;
for(int c=0; c<5; c++){
    printf("%d\n", vetor1[c]);
}
for(int c=0; c<5; c++){
    b3=0;
    for(int y=0; y<5; y++){
        if(vetor2[c]==vetor1[y]){
            b3++;
        }

    }
    if(!b3){
        printf("%d\n", vetor2[c]);
    }
}
    return 0;
}