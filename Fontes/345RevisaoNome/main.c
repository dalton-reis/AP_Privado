#include <stdio.h>
#include <stdlib.h>

/* 
- Leia um nome completo terminado por '.': Francisco Adell Péricas.
- Apresente o nome na forma de Referência Bibliográfica: Péricas, Francisco Adell.
*/

int main(int argc, char *argv[]) {
	char nome[100], palavra[20], referencia[100];
	int compr;
	
	strcpy(nome, "");
	printf("Entre com o nome completo terminado por '.': ");
	do {
		scanf("%s", palavra);
		compr = strlen(palavra);
		if (palavra[compr - 1] == '.') {
			strcpy(referencia, palavra);
			referencia[compr - 1] = ',';
			strcat(referencia, nome);
			strcat(referencia, ".");
		}
		else {
			strcat(nome, " ");
			strcat(nome, palavra);
		}
	} while (palavra[compr - 1] != '.');
	
	printf("A referencia bibliografica do nome eh: %s\n", referencia);
	
	return 0;
}
