#include <stdio.h>
#include <stdlib.h>

/*
- Ler dois valores
- Analisar se algum deles � nulo ou se t�m o mesmo sinal ou sinais diferentes
*/

int main(int argc, char *argv[]) {
	// Declara��o de vari�veis
	float x, y;
	
	// Entrada e valores
	printf("Entre com 2 numeros: ");
	scanf("%f %f", &x, &y);
	
	// Procedimentos e apresenta��o de resultados
	if ((x * y) < 0) {
		printf("Esses valores tem sinais diferentes\n");
	}
	else {
		printf("Esses valores tem o mesmo sinal\n");
	}

	return 0;
}
