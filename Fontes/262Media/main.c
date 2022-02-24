#include <stdio.h>
#include <stdlib.h>

/* 
- Ler uma série de números reais até ler 0
- Apresentar a média desses números
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	float numero, soma, media;
	int contador;
	
	/* Entrada de valores */
	printf("Entre com valores ('0' para terminar):\n");
	soma = 0;
	contador = 0;
	do {
		scanf("%f", &numero);
		soma = soma + numero;
		contador = contador + 1;
	} while (numero != 0);

	/* Procedimentos */
	media = soma / (contador - 1);
	
	/* Apresentação do resultado */
	printf("\nA media desses valores vale %f\n", media);

	return 0;
}
