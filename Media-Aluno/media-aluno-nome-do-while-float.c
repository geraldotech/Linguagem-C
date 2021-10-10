#include <stdio.h>
void main () {
    float av1, av2, media;
    int opt;
    char nome[30];
    do{
    printf("Nome do aluno:\n");
    scanf("%s", &nome);
    printf("Insira nota 1 e 2:\n");
    scanf("%f %f", &av1, &av2);
    media = (av1 + av2) /2;
    if (media >=6){
    printf("APROVADO! Media do aluno %s : %.2f",nome ,media);
    } else
    printf("REPROVADO! Media do aluno %s : %.2f",nome ,media);

    printf("\n1 - para continuar\n2 - para sair\n");
    scanf("%i", &opt);
    }
    while(opt==1);
    return 0;
}
