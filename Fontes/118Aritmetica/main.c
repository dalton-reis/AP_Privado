#include <stdio.h>
#include <stdlib.h>

/*
- Criar vari�veis inteiras
- Inicializar as vari�veis
- Fazer as 5 opera��es aritm�ticas inteiras
- Escrever na tela o resultado das opera��es
*/

int main(int argc, char *argv[]) {
	/* Declara��o de vari�veis */
	int valor1, valor2;
	int soma, diferenca, produto, divisao, resto;
  
	/* Inicializa��o das vari�veis */
	valor1 = 125;
	valor2 = 7;
  
	/* Procedimentos */
	soma = valor1 + valor2;
	diferenca = valor1 - valor2;
	produto = valor1 * valor2;
	divisao = valor1 / valor2;
	resto = valor1 % valor2;
  
	/* Apresenta��o dos resultados */
	printf("Os valores dados foram %i e %i\n", valor1, valor2);
	printf("A soma destes valores vale %i\n", soma);
	printf("A diferenca destes valores vale %i\n", diferenca);
	printf("O produto destes valores vale %i\n", produto);
	printf("A divisao destes valores vale %i\n", divisao);
	printf("O resto da divisao destes valores vale %i\n", resto);
	
	return 0;
}
