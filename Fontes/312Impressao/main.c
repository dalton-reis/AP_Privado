#include <stdio.h>
#include <stdlib.h>

/* 
- Ler um vetor de 15 inteiros
- Apresentar os valores deste vetor
- Apresentar os valores deste vetor em ordem invertida
*/

int main(int argc, char *argv[]) {
	int valor[15], indice;
	
	printf("Entre com 15 inteiros: ");
	for (indice = 0; indice < 15; indice = indice + 1) {
		scanf("%i", &valor[indice]);
	}

	printf("\nO vetor eh:\n[");
	for (indice = 0; indice <= 14; indice = indice + 1) {
		printf(" %i", valor[indice]);
	}
	printf(" ]\n");

	printf("\nO vetor invertido eh:\n[");
	for (indice = 14; indice >= 0; indice = indice - 1) {
		printf(" %i", valor[indice]);
	}
	printf(" ]\n");

	return 0;
}
