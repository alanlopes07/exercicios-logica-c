// Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float areaq, dobro;

  printf("\nInsira o valor da area do quadrado: \n");
  scanf("%f", &areaq);

  dobro = pow(areaq, 2) * 2;

  printf("\nO dobro da area do quadrado informado e: %.2f ", dobro);

  return 0;
}