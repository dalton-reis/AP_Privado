#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
- Leia um texto terminado por '.'
- Apresente o número de vogais que existem no texto
*/
int numeroVogais(char palavra[20]) {
	int len, indice, cont;
	
	cont = 0;
	len = strlen(palavra);
	for (indice = 0; indice < len; indice = indice + 1) {
		if ((palavra[indice] == 'a') || (palavra[indice] == 'A')) {
			cont = cont + 1;
		}
		else if ((palavra[indice] == 'e') || (palavra[indice] == 'E')) {
			cont = cont + 1;
		}
		else if ((palavra[indice] == 'i') || (palavra[indice] == 'I')) {
			cont = cont + 1;
		}
		else if ((palavra[indice] == 'o') || (palavra[indice] == 'O')) {
			cont = cont + 1;
		}
		else if ((palavra[indice] == 'u') || (palavra[indice] == 'U')) {
			cont = cont + 1;
		}
	}
	
	return cont;
}

int main(int argc, char *argv[]) {
	char palavra[20];
	int compr, num;
	
	printf("Entre com um texto terminado por '.':\n");
	num = 0;
	do {
		scanf("%s", palavra);
		compr = strlen(palavra);
		num = num + numeroVogais(palavra);
	} while (palavra[compr - 1] != '.');
	
	printf("\nEste texto possui %i vogais!\n", num);
	
	return 0;
}
