#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
- Ler os coeficientes de 2 vetores A e B
- Apresentar o vetor M resultante e o seu módulo |M|
*/

int main(int argc, char *argv[]) {
	/* Declaração de valores */
	float Ai, Aj, Bi, Bj;
	float Mi, Mj, mod;
	
	/* Entrada de valores */
	printf("Entre com os 2 coeficientes do vetor A: ");
	scanf("%f %f", &Ai, &Aj);
	printf("Entre com os 2 coeficientes do vetor B: ");
	scanf("%f %f", &Bi, &Bj);
	
	/* Procedimentos */
	Mi = Ai + Bi;
	Mj = Aj + Bj;
	mod = sqrt(Mi*Mi + Mj*Mj);
	
	/* Apresentação dos resultados */
	printf("Vetor M = A + B vale (%.2f,%.2f)\n", Mi, Mj);
	printf("|M| = %.2f\n", mod);
	
	return 0;
}
