#include <stdio.h>
#include <stdlib.h>

/*
- Ler uma lista de idades at� idade 0
- Apresentar a menor e a maior idade
- Fa�a uma fun��o para calcular a m�dia das idades
- Apresentar esta m�dia
*/

float media(int cont, float soma) {
	float result;
	result = soma / cont;
	return result;
}

int main(int argc, char *argv[]) {
	int idade, menorIdade, maiorIdade, contIdades;
	float mediaIdades, somaIdades;
	
	printf("Entre com uma serie de idades (0 para terminar):\n");
	contIdades = 0;
	somaIdades = 0;
	menorIdade = 200;
	maiorIdade = 0;
	
	do {
		scanf("%i", &idade);
		if (idade > 0) {
			if (idade < menorIdade) {
				menorIdade = idade;
			}
			if (idade > maiorIdade) {
				maiorIdade = idade;
			}
			contIdades = contIdades + 1;
			somaIdades = somaIdades + idade;
		}
	} while (idade != 0);
	
	mediaIdades = media(contIdades, somaIdades);

	printf("As idades estao entre %i e %i anos\n", menorIdade, maiorIdade);
	printf("A media das idades vale %.1f anos\n", mediaIdades);

	return 0;
}
