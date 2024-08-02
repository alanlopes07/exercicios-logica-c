/*Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.

Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float areaDaParede, precoDalata = 80.00, rendimentoLitro = 3.00, litrosPorLata = 18.00, precoTotal;
  int latasAcomprar;

  printf("\nInforme a area da parede em metros quadrados: \n");
  scanf("%f", &areaDaParede);

  latasAcomprar = ceil(areaDaParede / (rendimentoLitro * litrosPorLata));

  precoTotal = latasAcomprar * precoDalata;

  printf("\nA quantidade de latas a comprar e: %i\n no preco total de: R$:%.2f\n", latasAcomprar, precoTotal);

  return 0;
}