#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/* Elabore um algoritmo que leia tr�s n�meros e imprima o menor n�mero.*/
	float n1, n2, n3;
	printf("\n>Insira o primeiro n�mero: "); scanf("%f", &n1);
	printf(">Insira o segundo n�mero: "); scanf("%f", &n2);
	printf(">Insira o terceiro n�mero: "); scanf("%f", &n3);
	if(n1<n2&&n1<n3){
		printf("\n~O n�mero menor �: %.0f\n", n1);
	}
	else if(n1>n2&&n2<n3){
		printf("\n~O n�mero menor �: %.0f\n", n2);
	}
	else {
		printf("\n~O n�mero menor �: %.0f\n", n3);
	}
}
