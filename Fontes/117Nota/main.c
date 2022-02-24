#include <stdio.h>
#include <stdlib.h>

/*
- Criar variável decimal para sua nota
- Inicializar a nota
- Escrever na tela o valor da nota
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	float notaDeQuimica;
	
	/* Entrada de valores */
	notaDeQuimica = 8.2;
	
	/* Apresentação dos resultados */
	printf("Esta semana tirei %.1f em quimica\n", notaDeQuimica);
	
	return 0;
}
