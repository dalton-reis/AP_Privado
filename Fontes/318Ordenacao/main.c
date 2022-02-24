#include <stdio.h>
#include <stdlib.h>

/*
- Ler um vetor de 25 inteiros de um arquivo
- Apresentar os valores deste vetor
- Apresentar os valores ordenados deste vetor 
*/

void lerArquivo(int vetor[25]) {
	int k;
	FILE *fh;
	fh = fopen("arq.txt", "r");
	for (k = 0; k < 25; k = k + 1) {
		fscanf(fh, "%i", &vetor[k]);
	}
	fclose(fh);
}

void apresentar(int vetor[25]) {
	int k;
	for (k = 0; k < 25; k = k + 1) {
		printf("%8i", vetor[k]);
	}
	printf("\n");
}

void ordenar(int num[25]) {
	int k, temp;
	
	k = 0;
	while (k < 24) {
		if (num[k] > num[k + 1]) {	/* fora de ordem: precisa mudar */
			temp = num[k];
			num[k] = num[k + 1];
			num[k + 1] = temp;
			if (k > 0) {
				k = k - 1;
			}
		}
		else {
			k = k + 1;
		}
	}
}

int main(int argc, char *argv[]) {
	int valores[25];
	
	/* Ler 25 numeros de um arquivo: arq.txt */
	lerArquivo(valores);
	
	/* Apresentar os 25 números lidos na tela */
	printf("Os 25 valores lidos sao:\n");
	apresentar(valores);
	
	/* Ordenar o vetor de 25 números em ordem crescente */
	ordenar(valores);
	
	/* Apresentar os 25 números ordenaos */
	printf("Os 25 valores lidos em ordem crescente sao:\n");
	apresentar(valores);
	
	return 0;
}
