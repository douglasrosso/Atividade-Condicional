#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*.Um banco conceder� um cr�dito especial aos seus clientes, de acordo com o saldo m�dio no 
	�ltimo ano. Fa�a um algoritmo que receba o saldo m�dio de um cliente e calcule o valor do 
	cr�dito, de acordo com a tabela a seguir. Mostre o saldo m�dio e o valor do cr�dito. 
	Saldo M�dio 				Mensagem
	Acima de R$4.000,00 - 		30% do saldo m�dio
	R$ 4.000,00 R$ 3.000,00 - 	25% do saldo m�dio
	R$ 3.000,00 R$ 2.000,00 - 	20% do saldo m�dio
	At� R$ 2.000,00 - 			10% do saldo m�dio*/
	float annualBalance, credit;
	printf("Insira a m�dia anual do seu saldo em poupan�a/aplica��o, ");
	printf("para descobrir qual ser� o valor de cr�dito dispon�vel.\n");

	printf("\n>Insira a m�dia do seu saldo: "); scanf("%f", &annualBalance);
	if(annualBalance>4000){
		credit=(annualBalance*0.3)+annualBalance;
		printf("\nSeu saldo m�dio � [%.2f], voc� tem [%.2f] de cr�dito dispon�vel.\n", annualBalance, credit);
	}
	else if(annualBalance>3000){
		credit=(annualBalance*0.25)+annualBalance;
		printf("\nSeu saldo m�dio � [%.2f], voc� tem [%.2f] de cr�dito dispon�vel.\n", annualBalance, credit);
	}
	else if(annualBalance>2000){
		credit=(annualBalance*0.2)+annualBalance;
		printf("\nSeu saldo m�dio � [%.2f], voc� tem [%.2f] de cr�dito dispon�vel.\n", annualBalance, credit);
	}
	else {
		credit=(annualBalance*0.1)+annualBalance;
		printf("\nSeu saldo m�dio � [%.2f], voc� tem [%.2f] de cr�dito dispon�vel.\n", annualBalance, credit);
	}
	
}
