#include <stdio.h>
#include <stdlib.h>

/*
- Ler um número inteiro
- Apresentar a tabuada do número até o número ser 0
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	int valor, cont, resultado;
	
	/* Rotina de repetição para várias tabuadas */
	do {
		/* Entrada de valores */
		printf("\nEntre com um valor (0 para terminar): ");
		scanf("%i", &valor);
	
		/* Rotina de repetição para apresentação da tabuada */
		printf("Tabuada de %i:\n", valor);
		for (cont = 1; cont <= 10; cont = cont + 1) {
			resultado = cont * valor;
			printf("\t%2i x %i = %i\n", cont, valor, resultado);
		}
	} while (valor != 0);
		
	return 0;
}
