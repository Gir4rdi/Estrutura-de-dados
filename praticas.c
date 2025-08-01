#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 15  // define o tamanho máximo da fila como 15


int fila[M]; // Declara um array de inteiros de tamanho M(15) para armazenar os elementos da fila 
int p=0, u=0; N=0;  // "p" (para o 1 elemento), e "u" ( para o próximo espaço livre)

                    // ambos inicializando em 0, siginificando que a lista está vazia no começo 

//prototipos de funções
void insere(int elemento){
    fila[u++] = elemento;   // insere elemento na posição "u" e deposi incremente "u"

}
int remover(){
    return fila[p++]; // Retorna o elemento na posição "P" e depois incrementa "p"
    int num = fila[p++];
    if (p==N){
        p = 0;
    }

}

int vazia(){
    return u==p;

}
int cheia(){


    return (u+1)% N ==p;

}
int tamanho(){
    if (u>p)
    return u-p;
    else
    return N-(p-u);
}


int main(int a, char * arg[]){

    
    printf("%d", vazia());
    insere(111);
    insere(333);
    insere(555);
    return EXIT_SUCCESS;

}   