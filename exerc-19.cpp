#include <stdio.h>
#include <math.h>
#include <locale.h>

/*Fa�a um algoritmo que receba o pre�o, a categoria (1-limpeza; 2-alimenta��o; ou 3-
vestu�rio) e a situa��o (R-produtos que necessitam de refrigera��o; e N-produtos que n�o 
necessitam de refrigera��o). 
Calcule e mostre: 
� O valor do aumento, usando as regras que se seguem.
PRE�O 	-	CATEGORIA 	-	PERCENTUAL DE AUMENTO 
 -------------------------------------------------
		-		1 		-			5% 
<= 25	-		2 		-			8% 
		-		3 		-			10% 
 -------------------------------------------------
		-		1 		-			12% 
> 25	-		2 		-			15% 
		-		3 		-			18% 
� O valor do imposto, usando as regras a seguir. 
O produto que preencher pelo menos um dos seguintes requisitos pagar� imposto 
equivalente a 5% do pre�o; caso contr�rio, pagar� 8%. Os requisitos s�o: 
Categoria: 2 
Situa��o: R 
� O novo pre�o, ou seja, o pre�o mais aumento menos imposto. 
� A classifica��o, usando as regras a seguir.
NOVO PRE�O			 			CLASSIFICA��O 
<= R$ 50,00 					Barato 
Entre R$ 50,00 e R$ 120,00		Normal 
>= R$ 120,00 					Caro*/

	main()
	{
		setlocale(LC_ALL, "Portuguese");
		float price, imp;
		int category;
		char icy;
		printf("Digite 'r' para  produto que necessita de refrigera��o, e 'n' para produtos normais\n");
		printf("\nTipo do produto: "); scanf("%c", &icy);
		printf("\n------------------------------------------------------------------------------------\n");
		printf("Insira o pre�o do produto: "); scanf("%f", &price);
		printf("\n-----------------------------------------------------------\n");
		printf("Digite '1' - limpeza, '2' - alimenta��o ou '3' - vestu�rio");
		printf("\nInsira a categoria do produto: "); scanf("%d", &category);
		
		
		if (price<=25) {
			switch (category)
			{
				case 1:
					imp=0.05;
				break;
				case 2:
					imp=0.08;
				break;
				case 3:
					imp=0.1;
				break;
			}
		} 
		else {
			switch (category)
			{
				case 1:
					imp=0.12;
					break;
						case 2:
							imp=0.15;
							break;
								case 3:
									imp=0.18;
									break;
			}
		}
		printf("\n-----------------------------------\n");
		printf("Categoria ");
		if (price <= 50) {
			printf("Barato");
		} 
			else if (price < 120) {
				printf("Normal");
			} 	
				else {
					printf("Caro");
				}
		imp=imp*price;
		printf("\nPre�o com o imposto fica: R$%.2f", price+imp);
		
	}
