#include <stdio.h>
#include <stdlib.h>

/*
- Ler um número
- Apresentar a contagem regressiva até ZERO!
*/

int main(int argc, char *argv[]) {
	int num, cont;
	
	printf("Enre com um inteiro: ");
	scanf("%i", &num);
	
	for (cont = num; cont >= 1; cont = cont - 1) {
		printf("\t%4i\n", cont);
		sleep(1);
	}
	printf("\tZERO!\n");

	return 0;
}
