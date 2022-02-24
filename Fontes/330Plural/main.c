#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
- Ler palavras até 'fim'
- Apresentar o plural delas 
*/

int main(int argc, char *argv[]) {
	char palavra[20], plural[20];
	int compr;
	
	do {
		printf("Entre com uma palavra ('fim' para terminar): ");
		scanf("%s", palavra);
		strcpy(plural, palavra);
		compr = strlen(plural);
	
		if ((plural[compr - 1] == 'r') || (plural[compr - 1] == 'z')) {
			strcat(plural, "es");
		}
		else if (plural[compr - 1] == 'm') {
			plural[compr - 1] = 'n';
			strcat(plural, "s");
		}
		else if (plural[compr - 1] == 'l') {
			if (plural[compr - 2] == 'i') {
				plural[compr - 1] = 's';
			}
			else {
				plural[compr - 1] = 'i';
				strcat(plural, "s");
			}
		}
		else if ((plural[compr - 1] != 's') && (plural[compr - 1] != 'x')) {
			strcat(plural, "s");
		}
	
		printf("O plural de '%s' eh '%s'\n\n", palavra, plural);
	} while (strcmp(palavra, "fim") != 0);
	
	return 0;
}
