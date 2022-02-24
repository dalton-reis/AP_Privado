#include <stdio.h>
#include <stdlib.h>

/*
- Ler o valor de 3 segmentos
- Avaliar se podem ou não constituir um triângulo
*/

int main(int argc, char *argv[]) {
	int a, b, c;
	
	printf("Entre com 3 segmentos: ");
	scanf("%i %i %i", &a, &b, &c);

	if ((a >= b + c) || (b >= a + c) || (c >= a + b)) {
		printf("Estes segmentos NAO podem constituir um triangulo\n");
	}
	else {
		printf("Estes segmentos podem constituir um triangulo\n");
	}

	return 0;
}
