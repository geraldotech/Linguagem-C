#include <stdio.h>
void main () {
int x;
printf("Digite um numero:\n");
scanf("%i", &x);
do
{
printf("Digite um numero: ",x);
scanf("%d", &x);
if (x !=0)
printf("O numero = %d\n\n",x);
}
while(x!=0);
    return 0;
}
