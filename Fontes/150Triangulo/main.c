#include <stdio.h>
#include <stdlib.h>

/*
- Ler 3 lados de um tri�ngulo
- Classificar o tri�ngulo em EQUIL�TERO, IS�SCELES ou ESCALENO
*/

int main(int argc, char *argv[]) {
	/* Declara��o de vari�veis */
	int ladoA, ladoB, ladoC;
	
	/* Entrada de valores */
	printf("Entre com os 3 lados de um triangulo: ");
	scanf("%i %i %i", &ladoA, &ladoB, &ladoC);
	
	/* Procedimentos e apresenta��o de resultados */
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
