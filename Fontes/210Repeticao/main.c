#include <stdio.h>
#include <stdlib.h>

/*
- Apresentar a Tabela ASCII 
*/

int main(int argc, char *argv[]) {
	int cont;
	
	printf("Tabela ASCII:\n\n");

	/* 
		Repetição CONTAGEM: 
		for (<inicialização>; <condição>; <incremento>) { ... };
	*/
	for (cont = 32; cont <= 126; cont = cont + 1) {
		printf("%i-%c\t", cont, cont);
	}
	printf("\n\n");
	
	/*
		Repetição PRÉ-CONDIÇÃO: 
		while (<condição>) { ... };
	*/
	cont = 32;
	while (cont <= 126) {
		printf("%i-%c\t", cont, cont);
		cont = cont + 1;
	}
	printf("\n\n");
	
	/*
		Repetição PÓS-CONDIÇÃO: 
		do { ... } while (<condição>);
	*/
	cont = 32;
	do {
		printf("%i-%c\t", cont, cont);
		cont = cont + 1;
	} while (cont <= 126);
	printf("\n\n");
	
	return 0;
}
