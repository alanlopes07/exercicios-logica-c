/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês,
sabendo-se que são descontados 11% para o Imposto de Renda,
8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
    salário bruto.
    quanto pagou ao INSS.
    quanto pagou ao sindicato.
    o salário líquido.
calcule os descontos e o salário líquido, conforme a tabela abaixo:

    + Salário Bruto : R$
    - IR (11%) : R$
    - INSS (8%) : R$
    - Sindicato ( 5%) : R$
    = Salário Liquido : R$

Obs.: Salário Bruto - Descontos = Salário Líquido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float salarioHora, horasMes, salarioBruto, salarioLiquido, ir, inss, sindicato;

  printf("\nInforme o seu salario por hora: \n");
  scanf("%f", &salarioHora);
  printf("\nInforme suas horas trabalhadas no mes: \n");
  scanf("%f", &horasMes);

  salarioBruto = salarioHora * horasMes;
  ir = salarioBruto * (11.00 / 100);
  inss = salarioBruto * (8.00 / 100);
  sindicato = salarioBruto * (5.00 / 100);

  salarioLiquido = salarioBruto - ir - inss - sindicato;

  printf("\nIR: R$: %.2f\n", ir);
  printf("\nINSS: R$: %.2f\n", inss);
  printf("\nSINDICATO: R$: %.2f\n", sindicato);
  printf("\nSeu salario liquido ao final do mes e: R$: %.2f\n", salarioLiquido);

  return 0;
}