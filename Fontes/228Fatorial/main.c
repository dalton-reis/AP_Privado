#include <stdio.h>
#include <stdlib.h>

/*
- Ler um número inteiro
- Apresentar o fatorial do número até o número ser 0
*/

int main(int argc, char *argv[]) {
	int valor, cont;
	float resultado;
	
	do {
		printf("\nEntre com um valor (0 para terminar): ");
		scanf("%i", &valor);
	
		resultado = 1;
		for (cont = 1; cont <= valor; cont = cont + 1) {
			resultado = resultado * cont;
		}
	
		printf("O fatorial de %i vale: %.0f\n", valor, resultado);
	} while (valor != 0);

	return 0;
}
