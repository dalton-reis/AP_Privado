#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
- Ler o valor de 2 catetos
- Apresentar o valor da hipotenusa
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	float cat1, cat2;
	float hipotenusa;
	
	/* Entrada de valores */
	printf("Entre com o valor de 2 catetos: ");
	scanf("%f %f", &cat1, &cat2);
	
	/* Procedimentos */
	hipotenusa = sqrt(cat1*cat1 + cat2*cat2);
	
	/* Apresentação do resultado */
	printf("A hipotenusa do triangulo vale %.3f\n", hipotenusa);
	
	return 0;
}
