#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/* Elabore um algoritmo que leia dois n�meros
	 e imprima qual � maior e qual � menor.*/
	float n1, n2;
	printf(">Insira o primeiro n�mero: "); scanf("%f", &n1);
	printf(">Insira o segundo n�mero: "); scanf("%f", &n2);
	if(n1>n2)
	{
		printf("\n~O n�mero maior �: %.0f\n", n1);
		printf("\n~O n�mero menor �: %.0f\n", n2);
	}
	else {
		printf("\n~O n�mero maior �: %.0f\n", n2);
		printf("\n~O n�mero menor �: %.0f\n", n1);
		
	}
}
