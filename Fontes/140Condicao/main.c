#include <stdio.h>
#include <stdlib.h>

/* 
- Ler um n�mero inteiro
- Classificar o n�mero em: nulo, par, �mpar
*/

int main(int argc, char *argv[]) {
	/* Declara��o de vari�veis */
	int valor;
	
	/* Entrada de valores */
	printf("Entre com um inteiro: ");
	scanf("%i", &valor);
	
	/* Procedimentos e apresenta��o dos resultados */
	if (valor == 0) {
		printf("O numero eh NULO!\n");		
	} else if (valor % 2 == 0) {
		printf("O numero eh PAR!\n");		
	} else {
		printf("O numero eh IMPAR!\n");		
	}
	
	return 0;
}
