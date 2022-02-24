#include <stdio.h>
#include <stdlib.h>

/*
- Ler um n�mero inteiro
- Apresentar a tabuada do n�mero at� o n�mero ser 0
*/

int main(int argc, char *argv[]) {
	/* Declara��o de vari�veis */
	int valor, cont, resultado;
	
	/* Rotina de repeti��o para v�rias tabuadas */
	do {
		/* Entrada de valores */
		printf("\nEntre com um valor (0 para terminar): ");
		scanf("%i", &valor);
	
		/* Rotina de repeti��o para apresenta��o da tabuada */
		printf("Tabuada de %i:\n", valor);
		for (cont = 1; cont <= 10; cont = cont + 1) {
			resultado = cont * valor;
			printf("\t%2i x %i = %i\n", cont, valor, resultado);
		}
	} while (valor != 0);
		
	return 0;
}
