#include <stdio.h>
//numero aleatorio pois foi calculado a e b antes de receber valores
void main(){
int a, b, c;
printf("Entre com dois inteiros:\n");
scanf("%d %d", &a, &b);
c = a-b;
printf("A diferenca entre %d e %d vale %d\n", a, b, c);
}
