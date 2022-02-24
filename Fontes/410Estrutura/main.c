#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
- Ler o número de lados de um polígono (0 para terminar)
- Ler as coordenadas dos vértices deste polígono (usando struct para ponto)
- Calcular o perímetro do polígono e dar o seu nome
*/

struct ponto {
	float x;
	float y;
};

float calcDist(struct ponto p1, struct ponto p2) {
	float retVal;

	retVal = sqrt((p2.x-p1.x) * (p2.x-p1.x) + (p2.y-p1.y) * (p2.y-p1.y));

	return retVal;
}

int main(int argc, char *argv[]) {
	float per;
	struct ponto p[12];
	int i, numLados;
	char pol[12][16];

	strcpy(pol[0], "ponto");
	strcpy(pol[1], "reta");
	strcpy(pol[2], "triangulo");
	strcpy(pol[3], "quadrilatero");
	strcpy(pol[4], "pentagono");
	strcpy(pol[5], "hexagono");
	strcpy(pol[6], "heptagono");
	strcpy(pol[7], "octogono");
	strcpy(pol[8], "eneagono");
	strcpy(pol[9], "decagono");
	strcpy(pol[10], "undecagono");
	strcpy(pol[11], "dodecagono");

	do {
		printf("Entre com o numero de lados do poligono ('0' para terminar): ");
		scanf("%d", &numLados);

		if ((numLados >= 3) && (numLados <= 12)) {	
			/* processa o polígono */
			printf("Entre com as coordenadas:\n");
			for (i = 0; i < numLados; i = i + 1) {
				scanf("%f %f", &p[i].x, &p[i].y);
    		}

			/* cálculo do perímetro */
			per = 0;
			for (i = 0; i < (numLados - 1); i = i + 1) {
				per = per + calcDist(p[i], p[i + 1]);
			}
			per = per + calcDist(p[i], p[0]);

			/* resultado */
			printf("O poligono eh um %s", pol[numLados - 1]);
			printf(" com perimetro de %.2f\n\n", per);
		}
	} while (numLados != 0);
  
	return 0;
}
