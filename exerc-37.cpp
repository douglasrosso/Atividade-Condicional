#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*.Elabore um algoritmo que mostre o menu de op��es a seguir, 
	receba a op��o do usu�rio e os dados necess�rios para executar cada opera��o.
	Menu de Op��es
	a. Arredondamento para baixo
	b. Arredondamento para cima
	c. Logaritmo natural 
	d. Logaritmo de base 10
	e. Valor absoluto
	f. Parte inteira
	g. Parte decimal
	h. Quadrado
	i. Raiz quadrada
	Digite a op��o desejada: ____*/
	int integer;
	float number, result;
	char operation;
	printf("Menu de Op��es\n");
	printf("\n[a]. Arredondamento para baixo");
	printf("\n[b]. Arredondamento para cima");
	printf("\n[c]. Logaritmo natural");
	printf("\n[d]. Logaritmo de base 10");
	printf("\n[e]. Valor absoluto");
	printf("\n[f]. Parte inteira");
	printf("\n[g]. Parte decimal");
	printf("\n[h]. Quadrado");
	printf("\n[i]. Raiz quadrada");
	printf("\n\nDigite a opera��o desejada: "); scanf("%c", &operation);
	printf("\nDigite o valor: "); scanf("%f", &number);
	switch (operation)
	{
	case 'a': result = floor(number); printf("\nArredondamento para baixo: %f", result); break;
	case 'b': result = ceil(number); printf("\nArredondamento para cima: %f", result); break;
	case 'c': result = log(number); printf("\nLogaritmo: %f", result); break;
	case 'd': result = log10(number); printf("\nLogaritmo de 10: %f", result); break;
	case 'e': result = fabs(number); printf("\nValor absoluto: %f", result); break;
	case 'f': integer=number; printf("\nParte inteira: %d", integer); break;
	case 'g': integer=number; printf("\nParte decimal: %.2f", number-integer); break;
	case 'h': result = pow(number,2); printf("\nQuadrado: %f", result); break;
	case 'i': result = sqrt(number); printf("\nRaiz quadrada: %f", result); break;
	default:printf("\nOpera��o inv�lida, tente novamente.");
	}

}

