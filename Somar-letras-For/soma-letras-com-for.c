#include <stdio.h>
void main () {
    int cont;
    char letra;
    printf("Digite uma letra [soma na ordem numeros naturais]\n");
    scanf("%c", &letra);
    for(cont=0;cont<=10;cont=cont+1)
    {
    printf("%c + %i = %c\n",letra,cont, letra+cont);
}
 return 0;
}
