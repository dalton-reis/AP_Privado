#include <stdio.h>
#include <stdlib.h>

/*
- Criar variáveis char, int, float
- Inicializar as variáveis
- Escrever na tela o valor das variáveis
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	char letra;		/* a ? Z x X [-128, 127] */
	int idade;		/* 0 56 -23456 [-2147483648, 2147483647] */
	float salario;	/* 6 5.75 -4567.897 23E45 -15.4E-23 [1.2E-38, 3.4E38] */
	
	/* Inicialização de variáveis */
	letra = 'F';
	idade = 50;
	salario = 5567.86;
	
	/* Apresentação dos valores das variáveis */
	printf("Meu nome comeca com a letra %c\n", letra);
	printf("Minha idade eh %i anos, e %i anos nao eh velho!\n", idade, idade);
	printf("Meu salario vale R$ %.2f\n", salario);
	
	return 0;
}
