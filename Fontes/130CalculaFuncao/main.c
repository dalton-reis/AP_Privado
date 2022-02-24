#include <stdio.h>
#include <stdlib.h>

/*
- Ler um valor de x
- Apresentar na tela o valor de f(x) = (x^2 + 3)(2x - 4/(x^4 + 1)) + 2
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	float x, fx;
	
	/* Entrada de valores */
	printf("Calculo da funcao f(x) = (x^2 + 3)(2x - 4/(x^4 + 1)) + 2\n");
	printf("Entre com um valor para x: ");
	scanf("%f", &x);
	
	/* Procedimentos */
	fx = ((x*x + 3) * (2*x - 4/(x*x*x*x + 1))) + 2;
	
	/* Apresentação dos resultados */
	printf("f(x) = %.3f\n", fx);
	
	
	return 0;
}
