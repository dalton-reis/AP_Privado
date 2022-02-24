#include <stdio.h>
#include <stdlib.h>

/* 
- Ler 6 inteiros
- Apresentar o maior deles
*/

int pegaMaiorValor(int x, int y) {
	/* Declaração de variáveis */
	int z;
	
	/* Procedimentos */
	if (x > y) {
		z = x;
	}
	else {
		z = y;
	}
	
	/* Retorno do resultado */
	return z;
}

int main(int argc, char *argv[]) {
	// Declaração de variáveis
	int a, b, c, d, e, f;
	int maior;
	
	// Entrada de valores
	printf("Entre com 6 inteiros: ");
	scanf("%i %i %i %i %i %i", &a, &b, &c, &d, &e, &f);

	// Procedimentos
	maior = pegaMaiorValor(a, b);
	maior = pegaMaiorValor(maior, c);
	maior = pegaMaiorValor(maior, d);
	maior = pegaMaiorValor(maior, e);
	maior = pegaMaiorValor(maior, f);
	
	// Apresentação do resultado
	printf("O maior deles vale %i\n", maior);
	
	return 0;
}
