#include <stdio.h>
#include <stdlib.h>

/*
- Ler um n�mero inteiro
- Calcular por aproxima��o a raiz quadrada deste n�mero
*/

int main(int argc, char *argv[]) {
	/* Declara��o de vari�veis */
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
