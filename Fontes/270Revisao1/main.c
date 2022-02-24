#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
- Ler 2 valores de catetos
- Fazer uma função que calcule o valor da hipotenusa
- Apresentar o valor da hipotenusa
*/

float calculaHipotenusa(float x, float y) {
	/* Declaração de variáveis */
	float z;
	
	/* Procedimentos */
	z = sqrt((x * x) + (y * y));
	
	/* Retorno do resultado */
	return z;
}

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	float cateto1, cateto2, hipotenusa;
	
	/* Entrada de valores */
	printf("Entre com valores de 2 catetos: ");
	scanf("%f %f", &cateto1, &cateto2);
	
	/* Procedimentos */
	hipotenusa = calculaHipotenusa(cateto1, cateto2);
	
	/* Apresentação de resultados */
	printf("A hipotenusa deste triangulo retangulo vale %f\n", hipotenusa);
	
	return 0;
}
