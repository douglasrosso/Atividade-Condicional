#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Escreva um algoritmo para calcular e mostrar o sal�rio reajustado de um funcion�rio. O 
	percentual de aumento encontra-se na tabela a seguir.
	Sal�rio Percentual de aumento
	At� R$ 1500,00 - 35%
	Acima de 1500,00 - 15%*/
	float wage, readjustment;
	printf("Insira o valor atual do seu sal�rio, ");
	printf("para descobrir qual ser� o valor final, com o reajuste.\n");

	printf("\n>Insira o seu sal�rio atual: "); scanf("%f", &wage);
	if(wage<=1500){
		readjustment=(wage*0.35)+wage;
		printf("\nSeu sal�rio com um aumento de 30%% �: %.2f.\n", readjustment);
	}
	else{
		readjustment=(wage*0.15)+wage;
		printf("\nSeu sal�rio com um aumento de 15%% �: %.2f.\n", readjustment);
	}
	
}
