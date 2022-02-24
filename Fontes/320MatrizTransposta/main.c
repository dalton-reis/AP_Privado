#include <stdio.h>
#include <stdlib.h>

/*
- Entre com os valores de uma matriz 4x2
- Apresente esta matriz
- Apresenta esta matriz transposta
*/

int main(int argc, char *argv[]) {
	int mat[4][2];
	int lin, col;
	
	printf("Entre com os 8 inteiros de uma matriz 4x2:\n");
	for (lin = 0; lin < 4; lin = lin + 1) {
		for (col = 0; col < 2; col = col + 1) {
			scanf("%i", &mat[lin][col]);
		}
	}
	
	printf("\nA matriz 4x2 eh:\n");
	for (lin = 0; lin < 4; lin = lin + 1) {
		for (col = 0; col < 2; col = col + 1) {
			printf("\t%i", mat[lin][col]);
		}
		printf("\n");
	}

	printf("\nA matriz 4x2 transposta eh:\n");
	for (col = 0; col < 2; col = col + 1) {
		for (lin = 0; lin < 4; lin = lin + 1) {
			printf("\t%i", mat[lin][col]);
		}
		printf("\n");
	}
	
	return 0;
}
