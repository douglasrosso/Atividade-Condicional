#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Fa�a um programa que receba dois n�meros e execute as opera��es listadas a seguir, de 
	acordo com a escolha do usu�rio. Se for digitada uma op��o inv�lida, mostre uma 
	mensagem de erro e termine a execu��o do programa. As op��es s�o:
	a) O primeiro n�mero elevado ao segundo.
	b) Raiz quadrada de cada um dos n�meros.
	c) Raiz c�bica de cada um dos n�meros.*/
	float result;
	int numberOne, numberTwo, operations;
	printf("Insira 2 n�meros inteiros, para ap�s, executar as seguintes opera��es\n");
	printf("\n[1] - O primeiro n�mero elevado ao segundo\n"); 
	printf("[2] - Raiz quadrada de cada um dos n�meros\n"); 
	printf("[3] - Raiz c�bica de cada um dos n�meros\n"); 
	printf("\n>Insira o primeiro n�mero: "); scanf("%d", &numberOne);
	printf(">Insira o segundo n�mero: "); scanf("%d", &numberTwo);
	printf("\n>Insira o n�mero correspondente a uma das seguintes opera��es, [1], [2] ou [3]: "); scanf("%d", &operations);
	if(operations==1){
		result=pow(numberOne, numberTwo);
		printf("\nResultado do primeiro n�mero, elevado ao segundo n�mero �: %.2f\n", result);
	}
	else if(operations==2){
		result=sqrt(numberOne);
		printf("\nResultado da raiz quadrada de [%d] �: %f\n", numberOne, result);
		result=sqrt(numberTwo);
		printf("Resultado da raiz quadrada de [%d] �: %f\n", numberTwo, result);
	}
	else if(operations==3){
		result=cbrt(numberOne);
		printf("\nResultado da raiz c�bica de [%d] �: %f\n", numberOne, result);
		result=cbrt(numberTwo);
		printf("Resultado da raiz c�bica de [%d] �: %f\n", numberTwo, result);
	}
	else{
		printf("\nOpera��o invalida, tente novamente!\n", result);
	}
}
