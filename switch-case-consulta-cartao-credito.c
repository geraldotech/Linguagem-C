#include <stdio.h>
void main () {
int y, opt;
do {
printf("__________________________\n");
printf("CONSULTA CARTAO\nEscolha uma opcao:\n1 - Santander\n2 - Banco do Brasil\n");
printf("__________________________\n");
scanf("%i", &y);
switch (y) {


    case 1:

    printf("Santander Disponiveis:\n");
    printf("SX final 8633 limite: 5000 disponivel: 1000\n");
    printf("SX final 7759 limite: 2610 disponivel: 2400\n");
printf("__________________________\n");
    printf("Enter 1 to continue:\n ");
    scanf("%i", &opt);
    break;

    case 2:
    printf("Banco do Brasil:\n");
    printf("PRIVATE LABEL final 8322 limite: 4800 disponivel: 4600\n");
    printf("__________________________\n");
    printf("Enter 1 to continue:\n");
    scanf("%i", &opt);
    break;



    default :
    printf("NAO ENCONTRADO NA BASE");


}
}
while (opt == 1);
return 0;
}
