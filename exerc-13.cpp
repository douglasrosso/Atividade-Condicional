#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*O pre�o ao consumidor de um carro novo � a soma do custo de f�brica com a porcentagem 
	do distribuidor e dos impostos, ambos aplicados ao custo de f�brica. As porcentagens 
	encontram-se na tabela a seguir. Fa�a um algoritmo que receba o custo de f�brica de um 
	carro e mostre o pre�o ao consumidor.
	-	Custo de F�brica 					- 	% do distribuidor 	- 	% dos impostos
	-	At� R$ 15.000,00 					- 	5 					- 	isento
	-	At� R$ 15.000,00 e at� R$ 25.000,00 - 	10 					- 	15
	-	Acima de R$ 25.000,00 				- 	15 					- 	20*/
	float factoryCost, finalPrice;
	printf("A seguir, insira o pre�o de f�brica de um ve�culo, ");
	printf("para descobrir pre�o final para o cliente.\n");
	printf("\n>Insira o valor do ve�culo: "); scanf("%f", &factoryCost);
	if(factoryCost>25000){
		finalPrice=(factoryCost*0.15)+(factoryCost*0.2)+factoryCost;
		printf("\n~Valor do ve�culo com pre�o de fabrica [%.2f], ", factoryCost);
		printf("valor final para o cliente [%.2f].\n", finalPrice);
	}
	else if(factoryCost>15000){
		finalPrice=(factoryCost*0.10)+(factoryCost*0.15)+factoryCost;
		printf("\n~Valor do ve�culo com pre�o de fabrica [%.2f], ", factoryCost);
		printf("valor final para o cliente [%.2f].\n", finalPrice);
	}
	else {
		finalPrice=(factoryCost*0.05)+factoryCost;
		printf("\n~Valor do ve�culo com pre�o de fabrica [%.2f], ", factoryCost);
		printf("valor final para o cliente [%.2f].\n", finalPrice);
	}
	
}
