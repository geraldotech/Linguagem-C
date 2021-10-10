#include <stdio.h>
void main () {
    int x, y, rest, opt;
    //CALCULA RESTO DIVISAO COM DO WHILE
do{
    printf("Insira um valor:\n");
    scanf("%i", &x);
    printf("Insira outro valor:\n");
    scanf("%i", &y);

    rest = x % y;
    printf("Resto da divisao: %i\n",rest);

    printf("1 continuar:\n");
    scanf("%i", &opt);
    }
    while(opt==1);
    return 0;
}
