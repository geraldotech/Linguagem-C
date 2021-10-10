#include <stdio.h>
void main () {
float vet[4],soma,media;
int position=0;

for(position=0;position<=4;position++)
{
  scanf("%f", &vet[position]);
  soma=soma+vet[position];

}
media=soma/5;

for(position=0;position<=4;position++)
printf ("%.2f %.2f\n",vet[position],vet[position]+vet[position]);
printf ("MEDIA = %2.f\n",media);
}
