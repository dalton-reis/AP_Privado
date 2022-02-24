#include <stdio.h>
#include <stdlib.h>

/*
- Ler um valor e uma potencia inteira
- Apresentar o resultado da potência
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	int potencia, cont;
	float valor, resultado;
	
	/* Entrada de valores */
    printf("Entre com um valor e uma potencia inteira: ");
    scanf("%f %i", &valor, &potencia);
	
	/* Procedimentos */
	resultado = 1;
	for (cont = 1; cont <= potencia; cont = cont + 1) {
		resultado = resultado * valor;
	}
	
	/* Apresentação do resultado */
    printf("%f elevado a %i vale %f\n", valor, potencia, resultado);
	
	return 0;
}
