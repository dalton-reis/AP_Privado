#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
- Ler 2 valores de catetos
- Fazer uma fun��o que calcule o valor da hipotenusa
- Apresentar o valor da hipotenusa
*/

float calculaHipotenusa(float x, float y) {
	/* Declara��o de vari�veis */
	float z;
	
	/* Procedimentos */
	z = sqrt((x * x) + (y * y));
	
	/* Retorno do resultado */
	return z;
}

int main(int argc, char *argv[]) {
	/* Declara��o de vari�veis */
	float cateto1, cateto2, hipotenusa;
	
	/* Entrada de valores */
	printf("Entre com valores de 2 catetos: ");
	scanf("%f %f", &cateto1, &cateto2);
	
	/* Procedimentos */
	hipotenusa = calculaHipotenusa(cateto1, cateto2);
	
	/* Apresenta��o de resultados */
	printf("A hipotenusa deste triangulo retangulo vale %f\n", hipotenusa);
	
	return 0;
}
