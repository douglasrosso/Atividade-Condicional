#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Fa�a um programa que receba quatro notas de um aluno, calcule e mostre a m�dia 
	aritm�tica das notas e a mensagem aprovado ou reprovado, considerando m�dia 6.*/
	float nota1, nota2, nota3, nota4, media;
	printf(">Insira sua primeira nota: "); scanf("%f", &nota1);
	printf(">Insira sua segunda nota: "); scanf("%f", &nota2);
	printf(">Insira sua terceira nota: "); scanf("%f", &nota3);
	printf(">Insira sua quarta nota: "); scanf("%f", &nota4);
	media=(nota1+nota2+nota3+nota4)/4;
	if(media>=6)
	{
		printf("\n~Voc� est� aprovado\n");
	}
	else
	{
		printf("\n~Voc� est� reprovado\n");
	}
}
