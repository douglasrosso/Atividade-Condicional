#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*.Fa�a um algoritmo que receba: 
	� O c�digo do produto comprado; e 
	� A quantidade comprada do produto. 
	Calcule e mostre: 
	� O pre�o unit�rio do produto comprado, seguindo a Tabela I; 
	� O pre�o total da nota; 
	� O valor do desconto, seguindo a Tabela II e aplicado sobre o pre�o total da nota; e 
	� O pre�o final da nota depois do desconto.
	TABELA I 
		C�DIGO 	- 	PRE�O 
	1 a 10 		- R$ 10,00 
	11 a 20 	- R$ 15,00 
	21 a 30 	- R$ 20,00 
	31 a 40 	- R$ 30,00 
	TABELA II 
		PRE�O TOTAL DA NOTA 		- 	% DE 
	At� R$ 250,00 (n�o inclu�do) 	- DESCONTO 5% 
	Entre R$ 250,00 e R$ 500,00 	- 10% 
	Acima de R$ 500,00 				- 15%*/
	float unitPrice, noteDiscount, totalPrice, discount;
	int code, theAmount;
	printf("Informe o c�digo do produto, e a quantidade do mesmo, que se pede,\n");
	printf("para descobrir o total do desconto aplicado.\n");
	printf("\nInsira o c�digo do produto: "); scanf("%d", &code);
	printf("Insira a quantidade: "); scanf("%d", &theAmount);
	if(code<=10){
		unitPrice=10;
		totalPrice=unitPrice*theAmount;
	}
	else if(code<=20){
		unitPrice=15;
		totalPrice=unitPrice*theAmount;
	}
	else if(code<=20){
		unitPrice=20;
		totalPrice=unitPrice*theAmount;
	}
	else if(code<=40){
		unitPrice=30;
		totalPrice=unitPrice*theAmount;
	}
	else {
		printf("-C�digo inv�lido, tente navamente.-");
	}
	if(totalPrice<250){
		discount=totalPrice*0.05;
		noteDiscount=totalPrice-discount;
	}
	else if(totalPrice<500){
		discount=totalPrice*0.1;
		noteDiscount=totalPrice-discount;
	}
	else{
		discount=totalPrice*0.15;
		noteDiscount=totalPrice-discount;
	}
	printf("\n>Pre�o unit�rio �: [%.2f]\n", unitPrice);
	printf(">Pre�o total da nota �: [%.2f]\n", totalPrice);
	printf(">O valor do desconto �: [%.2f]\n", discount);
	printf(">Pre�o final da nota, com o desconto �: [%.2f]", noteDiscount);
}
