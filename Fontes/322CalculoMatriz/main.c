#include <stdio.h>
#include <stdlib.h>

/* 
- Ler um escalar e 2 matrizes 3x3
- Apresentar as matrizes
- Apresentar as matrizes multiplicadas pelo escalar
- Apresentar a soma das matrizes
- Apresentar o produto das matrizes
*/

void escrever(float mat[3][3]) {
	int j, k;
	for (j = 0; j < 3; j = j + 1) {
		for (k = 0; k < 3; k = k + 1) {
			printf("\t%.1f", mat[j][k]);
		}
		printf("\n");
	}
}

void multiplicaEscalar(float mat[3][3], float val, float res[3][3]) {
	int j, k;
	for (j = 0; j < 3; j = j + 1) {
		for (k = 0; k < 3; k = k + 1) {
			res[j][k] = val * mat[j][k];
		}
	}
}

void soma(float matA[3][3], float matB[3][3], float res[3][3]) {
	int j, k;
	for (j = 0; j < 3; j = j + 1) {
		for (k = 0; k < 3; k = k + 1) {
			res[j][k] = matA[j][k] + matB[j][k];
		}
	}
}

void multiplica(float matA[3][3], float matB[3][3], float res[3][3]) {
	int j, k, m;
	for (j = 0; j < 3; j = j + 1) {
		for (k = 0; k < 3; k = k + 1) {
			res[j][k] = 0;
			for (m = 0; m < 3; m = m + 1) {
				res[j][k] = res[j][k] + (matA[j][m] * matB[m][k]);
			}
		}
	}
}

int main(int argc, char *argv[]) {
	float num, matA[3][3], matB[3][3], result[3][3];
	int lin, col;
	
	/* Entrada de valores */
	printf("Entre com um escalar: ");
	scanf("%f", &num);
	printf("Entre com os 9 numeros de uma matriz 3x3:\n");
	for (lin = 0; lin < 3; lin = lin + 1) {
		for (col = 0; col < 3; col = col + 1) {
			scanf("%f", &matA[lin][col]);
		}
	}
	printf("Entre com os 9 numeros de outra matriz 3x3:\n");
	for (lin = 0; lin < 3; lin = lin + 1) {
		for (col = 0; col < 3; col = col + 1) {
			scanf("%f", &matB[lin][col]);
		}
	}
	
	/* Apresentação das matrizes */
	printf("\nA matriz A vale:\n");
	escrever(matA);
	printf("\nA matriz B vale:\n");
	escrever(matB);
	
	/* Apresentar as matrizes multiplicadas pelo escalar */
	multiplicaEscalar(matA, num, result);
	printf("\nA matriz %.1fxA vale:\n", num);
	escrever(result);
	multiplicaEscalar(matB, num, result);
	printf("\nA matriz %.1fxB vale:\n", num);
	escrever(result);

	/* Apresentar a soma das matrizes */
	soma(matA, matB, result);
	printf("\nA soma A+B vale:\n");
	escrever(result);
	
	/* Apresentar o produto das matrizes */
	multiplica(matA, matB, result);
	printf("\nO produto AxB vale:\n");
	escrever(result);
	
	return 0;
}
