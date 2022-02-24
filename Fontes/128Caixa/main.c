#include <stdio.h>
#include <stdlib.h>

/*
- Ler um valor
- Apresentar na tela o número de notas de R$ 50, R$ 10, R$ 5, R$ 1 necessárias
*/

int main(int argc, char *argv[]) {
	int valor, resto;
	int cinq, dez, cinco, um;
	
	printf("Entre com um valor inteiro: R$ ");
	scanf("%i", &valor);
	
	cinq = valor / 50;      //	321/50 -> 6
	resto = valor % 50;     //	321%50 -> 21
	
	dez = resto / 10;       //	21/10 -> 2
	resto = resto % 10;     //	21%10 -> 1
	
	cinco = resto / 5;      //	1/5 -> 0
	resto = resto % 5;      //	1%5 -> 1
	
	um = resto;
	
	printf("Para R$ %i,00 precisamos de:\n", valor);
	printf(" - %i nota(s) de R$ 50,00\n", cinq);
	printf(" - %i nota(s) de R$ 10,00\n", dez);
	printf(" - %i nota(s) de R$ 5,00\n", cinco);
	printf(" - %i moeda(s) de R$ 1,00\n", um);
	
	return 0;
}
