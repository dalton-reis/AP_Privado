#include <stdio.h>
#include <stdlib.h>

/*
- Ler 3 lados de um triângulo
- Classificar o triângulo em EQUILÁTERO, ISÓSCELES ou ESCALENO
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	int ladoA, ladoB, ladoC;
	
	/* Entrada de valores */
	printf("Entre com os 3 lados de um triangulo: ");
	scanf("%i %i %i", &ladoA, &ladoB, &ladoC);
	
	/* Procedimentos e apresentação de resultados */
	if ((ladoA == ladoB) && (ladoB == ladoC) && (ladoA == ladoC)) {
		printf("O triangulo eh EQUILATERO!\n");
	}
	else if ((ladoA != ladoB) && (ladoB != ladoC) && (ladoA != ladoC)) {
		printf("O triangulo eh ESCALENO!\n");
	}
	else {
		printf("O triangulo eh ISOCELES!\n");
	}

	return 0;
}
