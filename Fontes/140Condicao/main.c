#include <stdio.h>
#include <stdlib.h>

/* 
- Ler um número inteiro
- Classificar o número em: nulo, par, ímpar
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	int valor;
	
	/* Entrada de valores */
	printf("Entre com um inteiro: ");
	scanf("%i", &valor);
	
	/* Procedimentos e apresentação dos resultados */
	if (valor == 0) {
		printf("O numero eh NULO!\n");		
	} else if (valor % 2 == 0) {
		printf("O numero eh PAR!\n");		
	} else {
		printf("O numero eh IMPAR!\n");		
	}
	
	return 0;
}
