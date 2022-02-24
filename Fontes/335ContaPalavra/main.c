#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
- Ler um texto terminado por '.'
- Apresentar o n�mero de palavras lidas e o n�mero total de caracteres
*/

int main(int argc, char *argv[]) {
	char palavra[20];
	int numPalavras, numLetras, compr;
	
	printf("Entre com um texto terminado por '.':\n");
	numPalavras = 0;
	numLetras = 0;
	do {
		scanf("%s", palavra);
		compr = strlen(palavra);
		numLetras = numLetras + compr;
		numPalavras = numPalavras + 1;
	} while (palavra[compr - 1] != '.');
	
	printf("\nEste texto possui %i palavras", numPalavras);
	printf(" e %i caracteres\n", numLetras);

	return 0;
}
