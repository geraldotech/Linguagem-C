#include <stdio.h>
void main () {
int n;
char letra, soma;

printf("Digite uma letra e depois um n�mero\n");
scanf(" %c %d", &letra, &n);
soma = letra + n;
printf("A soma = %c",soma);
}
