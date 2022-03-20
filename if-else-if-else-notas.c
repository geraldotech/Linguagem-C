#include <stdio.h>
void main() {
float av1, av2, media;

printf("Ensira as notas:\n");
scanf("%f %f", &av1, &av2);
media = (av1 + av2) /2;
if (media >=6 && media <=9) {
    printf("APROVADO com media %.2f ",media);
}
else
    if (media >=10) {
printf("PARABENS APROVADO NOTA MAXIMA com media %.2f",media);
}
else {
    printf("REPROVADO! %.2f",media);
}
}

