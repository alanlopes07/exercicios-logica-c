// Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float grausF, grausC;

  printf("\nInforme a temperatura em Fareinheit: \n");
  scanf("%f", &grausF);

  grausC = (5 * (grausF - 32) / 9);

  printf("\nA temperatura em graus celcius e: %.2f ", grausC);

  return 0;
}