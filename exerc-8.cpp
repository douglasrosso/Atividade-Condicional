#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Elabore um algoritmo que receba dois n�meros e execute as 
	opera��es listadas a seguir, de acordo com a escolha do usu�rio.
	Escolha do usu�rio	- 			Opera��o
			1 			- M�dia entre os n�meros digitados;
			2 			- Diferen�a do maior pelo menor;
			3 			- Produto entre os n�meros digitados;
			4 			- Divis�o do primeiro pelo segundo;
	*/
	float numberOne, numberTwo, result;
	int operations;
	printf(">Insira um n�mero ale�torio: ", "%f"); scanf("%f", &numberOne);
	printf(">Insira outro n�mero ale�torio: ", "%f"); scanf("%f", &numberTwo);
	printf(">Insira um n�mero de '1' a '4': ", "%f"); scanf("%d", &operations);
	if(operations==1)
	{
		result=(numberOne*numberTwo)/2;
		printf("Resultado da m�dia entre os n�meros digitados �: %.2f", result);
	}
	else if(operations==2)
	{
		if(numberOne>numberTwo){
			result=numberOne-numberTwo;
		}
		else {
			result=numberTwo-numberOne;
		}
		printf("\n~Resultado da diferen�a do maior pelo menor �: %.2f", result);
	}
	else if(operations==3)
	{
		result=numberOne*numberTwo;
		printf("\n~Resultado do produto entre os n�meros digitados �: %.2f", result);
	}
	else if(operations==4)
	{
		result=numberOne/numberTwo;
		printf("\n~Resultado da divis�o do primeiro pelo segundo �: %.2f", result);
	}
	else {
		printf("\n~Resultado invalido\n", result);
	}
	
}
