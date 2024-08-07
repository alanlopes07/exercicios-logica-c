/*
Faça um Programa para uma loja de tintas.

O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados
e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00
ou em galões de 3,6 litros, que custam R$ 25,00.

Informe ao usuário as quantidades de tinta a serem compradas
e os respectivos preços em 3 situações:

    comprar apenas latas de 18 litros;
    comprar apenas galões de 3,6 litros;
    misturar latas e galões, de forma que o preço seja o menor.
        Acrescente 10% de folga e sempre arredonde os valores para cima,
        isto é, considere latas cheias.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float metrosQuadrados, metrosQuadradosMaisDez, rendimentoLitro = 6.00, tamanhoLata = 18.00, precoLata = 80.00, tamanhoGalao = 3.6, precoGalao = 25.00, precoTotalLatas, precoTotalGaloes, precoTotalCombinado;
  int latasAcomprar, galoesAcomprar, latasCombinado, galoesCombinado;

  printf("\nInforme a area que deseja pintar em metros quadrados: \n");
  scanf("%f", &metrosQuadrados);
  metrosQuadradosMaisDez = metrosQuadrados * 1.10;

  latasAcomprar = ceil(metrosQuadradosMaisDez / (rendimentoLitro * tamanhoLata));
  precoTotalLatas = latasAcomprar * precoLata;

  galoesAcomprar = ceil(metrosQuadradosMaisDez / (rendimentoLitro * tamanhoGalao));
  precoTotalGaloes = galoesAcomprar * precoGalao;

  latasCombinado = metrosQuadradosMaisDez / (rendimentoLitro * tamanhoLata);

  float restante = metrosQuadradosMaisDez - (latasCombinado * rendimentoLitro * tamanhoLata);

  galoesCombinado = ceil(restante / (rendimentoLitro / tamanhoGalao));
  precoTotalCombinado = (latasCombinado * precoLata) + (galoesCombinado * precoGalao);

  printf("\nTotal de tinta necessaria: \n");
  printf("\nCaso compre somente latas: %d latas - preco: R$: %.2f\n", latasAcomprar, precoTotalLatas);
  printf("\nCaso compre somente galoes: %d galoes - preco: R$: %.2f\n", galoesAcomprar, precoTotalGaloes);
  printf("\nCaso compre latas e galoes combinados: %d latas e %d galoes - preco: R$: %.2f\n", latasCombinado, galoesCombinado, precoTotalCombinado);

  return 0;
}