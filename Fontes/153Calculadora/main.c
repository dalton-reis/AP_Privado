#include <stdio.h>
#include <stdlib.h>

/* 
- Ler 2 valores e a opera��o aritm�tica
- Apresentar o resultado do c�lculo aritm�tico
*/

int main(int argc, char *argv[]) {
	/* Declara��o de vari�veis */
	float res, val1, val2;
	char operador;
	
	/* Entrada de valores */
	printf("Entre com 2 numeros: ");
	scanf("%f %f", &val1, &val2);
	printf("Entre com a operacao aritmetica (+ - x /): ");
	scanf(" %c", &operador);
	
	/* Procedimentos */
	if (operador == '+') {
		res = val1 + val2;
	}
	else if (operador == '-') {
		res = val1 - val2;
	}
	else if (operador == 'x') {
		res = val1 * val2;
	}
	else if (operador == '/') {
		res = val1 / val2;
	}
	
	/* Apresenta��o dos resultados */
	printf("\n\t%.2f %c %.2f = %.5f\n", val1, operador, val2, res);
	
	return 0;
}
