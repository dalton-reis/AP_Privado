#include <stdio.h>
#include <stdlib.h>

/*
- Criar um programa que leia um n�mero
- Escrever na tela o quadrado deste n�mero
*/

int main(int argc, char *argv[]) {
	/* Declara��o de vari�veis */
	int valor, quadrado;
	
	/* Entrada de valores */
	printf("Entre com um inteiro: ");
	scanf("%i", &valor);
	
	/* Procedimentos */
	quadrado = valor * valor;
	
	/* Apresenta��o de resultados */
	printf("O quadrado de %i vale %i\n", valor, quadrado);
	
	return 0;
}
