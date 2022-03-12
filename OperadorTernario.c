#include <stdio.h>
void main() {
int x;
printf("Digite um valor:");
scanf("%i", &x);
x >=0 ? x++ : x--;
printf("novo valor %i\n",x);
}
