// Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  int n1, n2;

  float n3, a, b, c;

  printf("\nInsira o primeiro numero: \n");
  scanf("%d", &n1);
  printf("\nInsira o segundo numero: \n");
  scanf("%d", &n2);
  printf("\nInsira o terceiro numero: \n");
  scanf("%f", &n3);

  a = (n1 * 2) * (n2 / 2.0);

  b = (n1 * 3) + n3;

  c = pow(n3, 3);

  printf("a - %f\nb - %f\nc - %f", a, b, c);

  return 0;
}