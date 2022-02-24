#include <stdio.h>
#include <stdlib.h>

/*
- Ler uma matriz 3x3
- Apresentar o determinante da matriz
*/

int main(int argc, char *argv[]) {
	float mat[3][3], deter;
	int lin, col;
	
	printf("Entre com uma matriz 3x3:\n");
	for (lin = 0; lin < 3; lin = lin + 1) {
		for (col = 0; col < 3; col = col + 1) {
			scanf("%f", &mat[lin][col]);
		}
	}
	
	printf("\nA matriz 3x3 eh:\n");
	for (lin = 0; lin < 3; lin = lin + 1) {
		for (col = 0; col < 3; col = col + 1) {
			printf("\t%.2f", mat[lin][col]);
		}
		printf("\n");
	}
	
	deter = 0;
	deter = deter + (mat[0][0] * mat[1][1] * mat[2][2]);
	deter = deter + (mat[0][1] * mat[1][2] * mat[2][0]);
	deter = deter + (mat[0][2] * mat[1][0] * mat[2][1]);
	deter = deter - (mat[0][0] * mat[1][2] * mat[2][1]);
	deter = deter - (mat[0][1] * mat[1][0] * mat[2][2]);
	deter = deter - (mat[0][2] * mat[1][1] * mat[2][0]);
	
	printf("\nO seu determinante vale %.2f\n", deter);
	
	return 0;
}
