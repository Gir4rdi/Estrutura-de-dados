#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tamanho_deAlunos50

int main()  {   

    int Quantidade_de_alunos;
    
    char**nomeDosAlunos = NULL;

    printf("Informe a quantidade a ser registrada:");
    if (scanf("%d", &Quantidade_de_alunos) != 1 || Quantidade_de_alunos <= 0){
        printf("Quantidade de Alunos invalida. Tente novamente.\n");
        return 1;

    }

}