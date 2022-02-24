#include <stdio.h>
#include <stdlib.h>

/* 
- Ler um n�mero decimal
- Apresentar o inverso desse n�mero
*/

int main(int argc, char *argv[]) {
	/* Declara��o de vari�veis */
	float valor, inverso;
	
	/* ntrada de valores */
	printf("Entre com um numero decimal: ");
	scanf("%f", &valor);
	
	/* Procediemntos e apresenta��o de resultados */
	if (valor == 0) {
		printf("O inverso de 0 vale INFINITO\n");
	}
	else {
		inverso =  1 / valor;
		printf("O inverso de %.2f vale %.4f\n", valor, inverso);
	}
	
	return 0;
}
