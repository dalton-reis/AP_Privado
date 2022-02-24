#include <stdio.h>
#include <stdlib.h>

/*
- Fazer uma fun��o para criar um arquivo com 25 n�meros aleat�rios
- Fazer uma fun��o para ler este arquivo e apresentar esses n�meros
*/

void criarArquivo(void) {
	int k;
	FILE *fh;
	
	fh = fopen("arq.txt", "w");
	
	srand(time(NULL));
	for (k = 0; k < 25; k = k + 1) {
		fprintf(fh, "%i\n", rand());
	}
	
	fclose(fh);
}
	
void lerArquivo(void) {
	int k, num;
	FILE *fh;
	
	fh = fopen("arq.txt", "r");
	
	printf("Os numeros do arquivo sao:\n");
	for (k = 0; k < 25; k = k + 1) {
		fscanf(fh, "%i", &num);
		printf("\t%5i\n", num);
	}
	
	fclose(fh);
}

int main(int argc, char *argv[]) {
	criarArquivo();
	lerArquivo();
	
	return 0;
}
