#include <stdio.h>
#include <stdlib.h>

/*
- Criar variáveis inteiras
- Inicializar as variáveis
- Fazer as 5 operações aritméticas inteiras
- Escrever na tela o resultado das operações
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	int valor1, valor2;
	int soma, diferenca, produto, divisao, resto;
  
	/* Inicialização das variáveis */
	valor1 = 125;
	valor2 = 7;
  
	/* Procedimentos */
	soma = valor1 + valor2;
	diferenca = valor1 - valor2;
	produto = valor1 * valor2;
	divisao = valor1 / valor2;
	resto = valor1 % valor2;
  
	/* Apresentação dos resultados */
	printf("Os valores dados foram %i e %i\n", valor1, valor2);
	printf("A soma destes valores vale %i\n", soma);
	printf("A diferenca destes valores vale %i\n", diferenca);
	printf("O produto destes valores vale %i\n", produto);
	printf("A divisao destes valores vale %i\n", divisao);
	printf("O resto da divisao destes valores vale %i\n", resto);
	
	return 0;
}
