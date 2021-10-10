#include <stdio.h>
void main () {
float av1, av2, media;
char nome[100];

printf("Qual seu nome?\n");
scanf(" %s",  &nome);
//fflush(stdin);
printf("Informe a nota da AV1:\n");
scanf("%f", &av1);
printf("Informe a nota da AV2:\n");
scanf("%f", &av2);
media = (av1 + av2) /2;
if (media >=6){
    printf("Parabens!!! %s aprovado com media = %.1f\n" ,nome ,media);
} else
printf("Reprovado! media = %.1f",media);
 return(0);
}
