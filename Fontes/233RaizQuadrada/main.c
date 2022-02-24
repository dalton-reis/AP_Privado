#include <stdio.h>
#include <stdlib.h>

/*
- Ler um número inteiro
- Calcular por aproximação a raiz quadrada deste número
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	int valor, raiz;
	
	do {
		/* Entrada de valores */
		printf("Entre com um inteiro (0 para terminar): ");
		scanf("%i", &valor);
	
		/* Procedimentos */
		if (valor < 0) {
			printf("Nao ha raiz inteira de numero negativo!\n\n");
		}
		else {
			raiz = 1;
			while (raiz * raiz <= valor) {
				raiz = raiz + 1;
			}
			raiz = raiz - 1;
	
			printf("A raiz inteira de %i vale %i\n\n", valor, raiz);
		}
	} while (valor != 0);

	return 0;
}
