#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*.Fa�a um algoritmo que receba o sal�rio atual de um funcion�rio e, 
	usando a tabela a seguir, calcule e mostre o valor do aumento e o novo sal�rio
	Sal�rio 					- Percentual de aumento
	Abaixo de R$3.000,00 		- 15%
	R$ 3.000,00 at� R$ 6.000,00 - 10%
	R$ 6.000,00 at� R$ 9.000,00 - 5%
	Acima de R$ 9.000,00 		- 0%*/
	float wage, salaryIncrease;
	printf("Insira o valor do seu sal�rio, para descobrir o aumento do seu sal�rio.\n");
	printf("\n>Insira o seu sal�rio: "); scanf("%f", &wage);
	if (wage<3000)
	{
		salaryIncrease=wage*1.15;
	}
	else if (wage<6000)
	{
		salaryIncrease=wage*1.1;
	}
	else if (wage<9000)
	{
		salaryIncrease=wage*1.05;
	}
	else
	{
		salaryIncrease=wage;
	}
	printf("Valor do seu sal�rio: %.2f", salaryIncrease);
}

