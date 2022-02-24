#include <stdio.h>
#include <stdlib.h>

/*
- Ler intervalo para resolução da equação
- Calcular o valor de x para f(x) = 0
*/

float f(float x) {
	/*	f(x) = x2 - 7x + 3	*/
	return x * x - 7 * x + 3;
}

int main(int argc, char *argv[]) {
	float x0, x1, xm;
	
	printf("Calculo de raiz de funcao: f(x) = x2 - 7x + 3\n\n");

	printf("Entre com o intervalo de pesquisa [x0, x1]: ");
	scanf("%f %f", &x0, &x1);

	if (f(x0) * f(x1) > 0) {	/* mesmo sinal */
		printf("Nao ha raizes neste intervalo!\n");
	}
	else {
        do {
            xm = (x0 + x1) / 2;
            if (f(x0) * f(xm) > 0) {	/* mesmo sinal */
                x0 = xm;
            }
            else {
                x1 = xm;
            }
        } while (x1 - x0 > 0.001);
        
		printf("A raiz da equacao neste intervalo vale %.3f\n\n", xm);
	}

	return 0;
}
