#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50

struct DICT{
    int n;
    struct DICT *prox;
    int ultimo;
};

typedef struct DICT dict;

void adiciona(dict *my_dict, int valor);
dict* percorre(dict *my_dict);
void printa(dict *my_dict);

int main(){

    dict my_dict;
    my_dict.n = 10;
    my_dict.ultimo = 1;

    adiciona(&my_dict, 1);
    adiciona(&my_dict, 2);
    adiciona(&my_dict, 3);
    adiciona(&my_dict, 4);
    adiciona(&my_dict, 55);
    adiciona(&my_dict, 65);



    printa(&my_dict);




    return 0;
}

void adiciona(dict *my_dict , int valor){
    dict *new_dict;
    new_dict = percorre(my_dict);
    
    
    
    new_dict->ultimo = 0;
    dict *ponteiro_dict;
    ponteiro_dict = (dict *)malloc(sizeof(dict));
    new_dict->prox = ponteiro_dict;
    ponteiro_dict->n = valor; 
    ponteiro_dict->ultimo = 1;
    

}

dict* percorre(dict *my_dict){
    dict *ponteiro_no;
    ponteiro_no = my_dict;
    int percorreu = ponteiro_no->ultimo;
    while(!percorreu){
        ponteiro_no = ponteiro_no->prox;
        percorreu = ponteiro_no->ultimo;

    }
    return ponteiro_no;
}

void printa(dict *my_dict){
    int percorreu = 0;
    dict *ponteiro_no;
    ponteiro_no = my_dict;
    while(!percorreu){
        printf("%d\n", ponteiro_no->n);

        percorreu = ponteiro_no->ultimo;
        ponteiro_no = ponteiro_no->prox;
    }
}