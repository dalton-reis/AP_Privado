#include <stdio.h>
#include <stdlib.h>

/*
- Ler dois valores
- Analisar se algum deles é nulo ou se têm o mesmo sinal ou sinais diferentes
*/

int main(int argc, char *argv[]) {
	// Declaração de variáveis
	float x, y;
	
	// Entrada e valores
	printf("Entre com 2 numeros: ");
	scanf("%f %f", &x, &y);
	
	// Procedimentos e apresentação de resultados
	if ((x * y) < 0) {
		printf("Esses valores tem sinais diferentes\n");
	}
	else {
		printf("Esses valores tem o mesmo sinal\n");
	}

	return 0;
}
