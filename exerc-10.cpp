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
	/*Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$ 
	1.500,00. Escreva um algoritmo em que receba o sal�rio do funcion�rio e mostre o valor do 
	sal�rio reajustado ou uma mensagem, caso ele n�o tenha direito ao aumento.*/
	float wage, readjustment;
	printf("Insira o valor atual do seu sal�rio, ");
	printf("para descobrir qual ser� o valor final, com o reajuste.\n");

	printf("\n>Insira o seu sal�rio atual: "); scanf("%f", &wage);
	if(wage<1500){
		readjustment=(wage*0.3)+wage;
		printf("\nSeu sal�rio com um aumento de 30%% �: %.2f.\n", readjustment);
	}
	else{
		printf("\nSeu sal�rio n�o pode ser reajustado, pois excede R$ 1.500,00.\n", readjustment);
	}
	
}
