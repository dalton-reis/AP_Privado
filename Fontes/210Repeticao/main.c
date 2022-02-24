#include <stdio.h>
#include <stdlib.h>

/*
- Apresentar a Tabela ASCII 
*/

int main(int argc, char *argv[]) {
	int cont;
	
	printf("Tabela ASCII:\n\n");

	/* 
		Repeti��o CONTAGEM: 
		for (<inicializa��o>; <condi��o>; <incremento>) { ... };
	*/
	for (cont = 32; cont <= 126; cont = cont + 1) {
		printf("%i-%c\t", cont, cont);
	}
	printf("\n\n");
	
	/*
		Repeti��o PR�-CONDI��O: 
		while (<condi��o>) { ... };
	*/
	cont = 32;
	while (cont <= 126) {
		printf("%i-%c\t", cont, cont);
		cont = cont + 1;
	}
	printf("\n\n");
	
	/*
		Repeti��o P�S-CONDI��O: 
		do { ... } while (<condi��o>);
	*/
	cont = 32;
	do {
		printf("%i-%c\t", cont, cont);
		cont = cont + 1;
	} while (cont <= 126);
	printf("\n\n");
	
	return 0;
}
