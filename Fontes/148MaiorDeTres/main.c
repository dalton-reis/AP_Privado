#include <stdio.h>
#include <stdlib.h>

/* 
- Ler 3 inteiros
- Apresentar o maior deles
*/

int main(int argc, char *argv[]) {
	/* Declara��o de vari�veis */
    int val1, val2, val3;
    int maior;
	
	/* Entrada de valores */
    printf("Entre com 3 inteiros: ");
    scanf("%i %i %i", &val1, &val2, &val3);
	
	/* Procedimentos */
	if (val1 > val2) {	/* val2 n�o � o maior deles */
		if (val1 > val3) {
			maior = val1;
		}
		else {
			maior = val3;
		}
	}
	else {				/* val1 n�o � o maior deles */
		if (val2 > val3) {
			maior = val2;
		}
		else {
			maior = val3;
		}
	}
	
	/* Apresenta��o do resultado */
    printf("O maior desses numeros vale %i\n", maior);
	
	return 0;
}
