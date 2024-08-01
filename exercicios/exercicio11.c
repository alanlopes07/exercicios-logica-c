// Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float h, pesoIdealh, pesoIdealm;

  printf("Informe sua altura: \n");
  scanf("%f", &h);

  pesoIdealh = (72.7 * h) - 58;
  pesoIdealm = (62.1 * h) - 44.7;

  printf("\nPeso ideal homem: %.2f\nPeso ideal mulher: %.2f\n", pesoIdealh, pesoIdealm);

  return 0;
}