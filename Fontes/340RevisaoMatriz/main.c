#include <stdio.h>
#include <stdlib.h>

/*
- Ler dois números inteiros
- Obter o menor (a) e o maior (b)
- Criar e inicializar uma matriz 5x5:
     a a a a a
     a a a a a
     a a b a a
     a a a a a
     a a a a a
- Fazer uma função que imprima a matriz
- Fazer uma função que calcule a média dos valores da matriz
*/

void imprime(int mat[5][5]) {
	int l, c;
	
	for (l = 0; l < 5; l = l + 1) {
		for (c = 0; c < 5; c = c + 1) {
			printf("\t%i", mat[l][c]);
		}
		printf("\n");
	}
}

float calculaMedia(int mat[5][5]) {
	int l, c;
	float soma, media;
	
	soma = 0;
	for (l = 0; l < 5; l = l + 1) {
		for (c = 0; c < 5; c = c + 1) {
			soma = soma + mat[l][c];
		}
	}
	media = soma / 25;
	
	return media;
}

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	int num1, num2, a, b, lin, col;
	int matriz[5][5];
	float media;
	
	/* Entrada de valores */
	printf("Entre com 2 inteiros: ");
	scanf("%i %i", &num1, &num2);
	
	if (num1 < num2) {
		a = num1;
		b = num2;
	}
	else {
		a = num2;
		b = num1;
	}
	
	for (lin = 0; lin < 5; lin = lin + 1) {
		for (col = 0; col < 5; col = col + 1) {
			matriz[lin][col] = a;
		}
	}
	matriz[2][2] = b;
	
	/* Procedimentos e apresentação dos resultados */
	printf("\nA matriz criada eh:\n");
	imprime(matriz);
	media = calculaMedia(matriz);
	printf("\nA media dos valores da matriz vale %.2f\n", media);

	return 0;
}
