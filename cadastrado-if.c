#include <stdio.h>
void main () {
    int cadastrado, ativo, logado;
    char opcao;

    cadastrado = ativo = logado = 0;

    printf("Deseja cadastrar? S/N \n");
    scanf(" %c", &opcao);

    if(opcao == 'S'){
    cadastrado = 1;
        printf("\nConta cadastrada \n");
    }
    printf("Deseja ativar sua conta? S/N \n");
    scanf(" %c", &opcao);

    if(opcao == 'S'){
    ativo = 1;
        printf("\nConta ativada \n");
    }
    printf("Deseja logar sua conta? S/N \n");
    scanf(" %c", &opcao);

    if(opcao == 'S'){
    logado = 1;
        printf("\nConta logada \n");
    }

    if ((cadastrado == 1) && (ativo == 1) || (logado == 1)){
        printf("Seja Bem Vindo\n");
    } else {
        printf("Ocorreu algum erro\n");
    }


}
