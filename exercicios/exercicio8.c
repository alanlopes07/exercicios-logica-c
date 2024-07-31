// Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float grausC, grausF;

  printf("\nInforme a temperatura em graus Celsius: \n");
  scanf("%f", &grausC);

  grausF = grausC * 1.8 + 32;

  printf("\nA temperatura em graus Farenheit e: %.2f ", grausF);

  return 0;
}