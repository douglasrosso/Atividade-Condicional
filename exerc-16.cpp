#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Fa�a um algoritmo que receba o pre�o de um produto e seu c�digo de origem e mostre sua 
	proced�ncia. A proced�ncia obedece � tabela a seguir.
	C�DIGO DE ORIGEM 	- PROCED�NCIA 
	1 					- Sul 
	2 					- Norte 
	3 					- Leste 
	4 				%	- Oeste 
	5 ou 6 				- Nordeste 
	7 ou 8 ou 9 		- Sudeste 
	10 a 20 			- Centro-oeste 
	21 a 30 			- Nordeste*/
	float price;
	int code;
	printf("Insira o valor do produto e seu c�digo de origem, ");
	printf("descobrir de qual estado ele �.\n");
	printf("\n>Insira o pre�o do seu produto: "); scanf("%f", &price);
	printf("\n>Insira o c�digo de origem do produto: "); scanf("%f", &code);
	if (code==1)
	{
		printf("Seu produto � fabricado no Sul.");
	}
	else if (code==2)
	{
		printf("Seu produto � fabricado no Norte.");
	}
	else if (code==3)
	{
		printf("Seu produto � fabricado no Leste.");
	}
	else if (code==4)
	{
		printf("Seu produto � fabricado no Oeste.");
	}
	else if (code==5 || code==6)
	{
		printf("Seu produto � fabricado no Nordeste.");
	}
	else if (code==7 || code==8 || code==9)
	{
		printf("Seu produto � fabricado no Sudeste.");
	}
	else if (code>=10 && code<=20)
	{
		printf("Seu produto � fabricado no Centro-Oeste.");
	}
	else if (code>=21 && code<=30)
	{
		printf("Seu produto � fabricado no Nordeste.");
	}
	printf("\nValor do seu produto: %.2f", price);
}

