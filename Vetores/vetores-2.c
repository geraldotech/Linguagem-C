#include <stdio.h>
void main () {
    float notas[4];
    int i;
    //entrada de dados
    for (i=0;i<=3;i++)
    {
    printf("Digite a nota do aluno:\n");
    scanf("%f", &notas[i]);
    }
    //saida de dados
    for (i=0;i<=3;i++) {
         printf("O valor da nota:%.2f\n",notas[i]);

    }

}
