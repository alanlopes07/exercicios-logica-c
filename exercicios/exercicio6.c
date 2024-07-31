// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float salarioHora, horasTrabalhadas, salarioTotal;

  printf("Quanto voce recebe por hora? \n");
  scanf("%f", &salarioHora);
  printf("Quantas horas mensais voce trabalha? \n");
  scanf("%f", &horasTrabalhadas);

  salarioTotal = salarioHora * horasTrabalhadas;

  printf("Seu salario total ao final do mes e: R$: %.2f ", salarioTotal);

  return 0;
}