#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Elabore um algoritmo que leia dois n�meros inteiros e efetue a adi��o; 
	caso o resultado seja maior que 10, imprima-o.*/
	int numb1, numb2, result;
	printf(">Defina o primeiro n�mero: "); scanf("%d", &numb1);
	printf(">Defina o segundo n�mero: "); scanf("%d", &numb2);
	result=numb1+numb2;
	if(result>10)
	{
		printf("~Seu resultado � : %d, e ele � maior que 10", result);
	}
}
