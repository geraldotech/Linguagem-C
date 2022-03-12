#include <stdio.h>
//tabuada com limite maximo a ser definido
void main () {
int x, opt, limit;
printf("Qual tabuada:\n");
scanf("%i", &opt);

printf("Qual limite da tabuada:\n");
scanf("%d", &limit);

for(x=1;x<=limit;x++){
    printf("%i x %i = [%i]\n",opt,x,opt*x);
}


}
