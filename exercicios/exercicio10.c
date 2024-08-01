// Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float altura, pesoIdeal;

  printf("\nInforme sua altura: \n");
  scanf("%f", &altura);

  pesoIdeal = (72.7 * altura) - 58;

  printf("\nSeu peso ideal e: %.2f", pesoIdeal);

  return 0;
}