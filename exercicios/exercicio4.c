// Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float raio, area;

  printf("\nInsira o valor do raio: ");
  scanf("%f", &raio);

  area = M_PI * pow(raio, 2);

  printf("\nA area do raio que deseja calcular e: %.2f ", area);

  return 0;
}