#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
- Ler uma palavra e uma letra
- Apresentar o número de vezes que a letra aparece na palavra
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	char palavra[30], letra;
	int num, pos, compr;
	
	/* Entrada de valores */
	printf("Entre com uma palavra e uma letra: ");
	scanf("%s %c", palavra, &letra);
	
	/* Procedimentos */
	num = 0;
	compr = strlen(palavra);
	for (pos = 0; pos < compr; pos = pos + 1) {
		if (palavra[pos] == letra) {
			num = num + 1;
		}
	}
	
	/* Apresentação de resultados */
	printf("\nA letra '%c' aparece %i vezes em '%s'\n", letra, num, palavra);
	
	return 0;
}
