#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Uma empresa decidiu dar uma gratifica��o de Natal a seus funcion�rios, baseada no n�mero 
	de horas extras e no n�mero de horas que o funcion�rio faltou ao trabalho. O valor do pr�mio 
	� obtido pela consulta � tabela que se segue, na qual:
	H = n�mero de horas extras - (2/3 * (n�mero de horas falta))
	H (MINUTOS) 				PR�MIO (R$) 
	>= 2.400					500,00 
	1.800 2.400 				400,00 
	1.200 1.800 				300,00 
	600 1.200 					200,00 
	< 600 						100,00 
	Escreva um algoritmo que receba o n�mero de horas extras trabalhadas pelo funcion�rio e o 	
	n�mero de horas que o mesmo faltou ao trabalho. Calcule e mostre o valor de H assim como 
	o valor do pr�mio a ser recebido pelo funcion�rio.	*/
	float premio, horaTotal;
	int faltas, horaExtra;
	printf("Insira em minutos, quantas horas extras trabalhadas\n");
	printf("\n>Quantidade de horas extras trabalhadas: "); scanf("%d", &horaExtra);
	printf("\n>Informe a quantidade de faltas em horas: "); scanf("%d", &faltas);
	horaTotal=horaExtra - (2/3 * faltas);
	if (horaTotal >= 2400) {
		premio=500;
	} else if (horaTotal >= 1800) {
		premio=400;
	} else if (horaTotal >= 1200) {
		premio=300;
	} else if (horaTotal >= 600) {
		premio=200;
	} else {
		premio=100;
	}
	printf("\n------------------------------------------------------------\n");
	printf("O valor recebido do pr�mio �: %f", premio);
	
	
	
}
