#include <stdio.h>
//by Geraldo-Tech do while for
void main () {
int cont, res, opt;
do
{
printf("TABUADA DE QUALQUER NUMERO:\n");
printf("Insira um valor: ");
scanf (" %i", &res);
for (cont=1;cont<=10;cont=cont+1)
    printf("%d x %d = %i\n",res ,cont, cont*res);

printf("1 - continuar\n0 - sair \n");
scanf (" %i", &opt);
}
while (opt==1);
return 0;
}
