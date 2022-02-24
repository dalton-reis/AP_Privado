#include <stdio.h>
#include <stdlib.h>

/*
- Criar um programa que leia um número
- Escrever na tela o quadrado deste número
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	int valor, quadrado;
	
	/* Entrada de valores */
	printf("Entre com um inteiro: ");
	scanf("%i", &valor);
	
	/* Procedimentos */
	quadrado = valor * valor;
	
	/* Apresentação de resultados */
	printf("O quadrado de %i vale %i\n", valor, quadrado);
	
	return 0;
}
