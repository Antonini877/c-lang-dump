#include <stdio.h>
int main(){
    float baseMaior, baseMenor, altura;
    printf("base maior: ");
    scanf("%f", &baseMaior);
    printf("base menor: ");
    scanf("%f", &baseMenor);
    printf("altura: ");
    scanf("%f", &altura);
    if((baseMenor>0)&&(baseMaior>0)){
        float area = ((baseMaior+baseMenor)*altura)/2;
        printf("%.1f", area);
    }else{
        printf("certifique se de que os valores sao maiores que 0.");
    }
    return 0;
}