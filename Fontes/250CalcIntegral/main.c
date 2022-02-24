#include <stdio.h>
#include <stdlib.h>

/*
- Ler intervalo para calcular a integral definida
- Calcular o valor da integral definida
*/

float f(float x) {
	/*	f(x) = x	*/
	/*	return x;	*/
	
	/*	f(x) = x2 - 7x + 3	*/
	return x * x - 7 * x + 3;
}

float calculaIntegral(float x0, float x1, float dx) {
    float res, x;
      
    res = 0;
    for (x = x0; x < x1; x = x + dx) {
        res = res + (f(x) + f(x + dx)) * dx / 2;
    }
    
    return res;
}

int main(int argc, char *argv[]) {
	float x0, x1, result;
	
	/* printf("Calculo da integral definida da funcao f(x) = x\n\n"); */
	printf("Calculo da integral definida da funcao f(x) = x2 - 7x + 3\n\n");
	
    printf("Entre com o intervalo [x0, x1]: ");
	scanf("%f %f", &x0, &x1);

    result = calculaIntegral(x0, x1, 0.001);

    printf("A integral de f(x) deste intervalo vale %.3f\n", result);

	return 0;
}
