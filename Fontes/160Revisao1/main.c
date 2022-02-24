#include <stdio.h>
#include <stdlib.h>

/*
- Ler uma temperatura com unidade (Célcius (C) ou Fahrenheit (F))
- Converter para a outra unidade de temperatura: 9.C = 5.(F-32)
- Ex: 32F equivale a 0C
- Ex: 0C equivale a 32F
*/

int main(int argc, char *argv[]) {
	// Declaração de variáveis
	int temperatura, resultado;
	char unidade;
	
	// Entrada de valores
	printf("Entre com uma temperatura (C ou F): ");
	scanf("%i%c", &temperatura, &unidade);
	
	// Procedimentos e apresentação do resultado
	if (unidade == 'C') {
		resultado = 32 + 9 * temperatura / 5;
		printf("%iC equivale a %iF\n", temperatura, resultado); 
	}
	else if (unidade == 'F') {
		resultado = (temperatura - 32) * 5 / 9;
		printf("%iF equivale a %iC\n", temperatura, resultado);
	}
	else {
		printf("Unidade '%c' invalida!\n", unidade);
	}

	return 0;
}
