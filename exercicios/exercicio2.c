// Faça um Programa que peça as 4 notas bimestrais e mostre a média.

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float n1, n2, n3, n4, media;

  printf("Informe a nota do primeiro bimestre: \n");
  scanf("%f", &n1);
  printf("Informe a nota do segundo bimestre: \n");
  scanf("%f", &n2);
  printf("Informe a nota do terceiro bimestre: \n");
  scanf("%f", &n3);
  printf("Informe a nota do quarto bimestre: \n");
  scanf("%f", &n4);

  media = (n1 + n2 + n3 + n4) / 4;

  printf("A sua media final e: %.2f\n", media);

  return 0;
}