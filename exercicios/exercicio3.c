// Faça um Programa que converta metros para centímetros.

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float metros, centimetros;

  printf("\nInforme a quantidade de metros: ");
  scanf("%f", &metros);

  centimetros = metros * 100;

  printf("\nA conversao de %2.fm para centimetros e = %.2fcm ", metros, centimetros);

  return 0;
}