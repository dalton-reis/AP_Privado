#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
- Ler os coeficientes de uma equacao do 2' grau ax2+bx+c=0
- Obter, quando existir, as raízes reais dessa equação
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	float a, b, c;
	float delta, x1, x2;
	
	/*Entrada de valores */
	printf("Entre com os coeficientes de uma equacao do 2' grau (ax2+bx+c=0): ");
	scanf("%f %f %f", &a, &b, &c);
	
	/* Procedimentos */
	delta = b*b - 4*a*c;
	
	/* Apresentação dos resultados */
	if (a == 0) {
		printf("Esta equacao nao eh do segundo grau!\n");
	}
	else {
		if (delta < 0) {
			printf("Esta equacao nao possui raizes reais!\n");
		}
		else {
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
	    	printf("As raizes desta equacao sao %.4f e %.4f\n", x1, x2);
		}
	}
	
	return 0;
}
