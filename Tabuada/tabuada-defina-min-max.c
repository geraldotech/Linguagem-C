#include <stdio.h>
void main () {
int cont, max, opt;

printf("Qual tabuada:\n");
scanf("%i", &opt);
printf("Define a maximum value:\n");
scanf("%i", &max);

for(cont=0;cont <= max; cont++) {
    printf("%i * %i = [%i]\n",opt,cont,cont*opt);
}



}
