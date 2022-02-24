#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
- Saiba que o valor de um carro deprecia 5% ao ano
- Ler lista por carros (até 'Fim') com o ano de fabricação e o preço original
      Fusca 1990 21234.56
      Chevette 1980 30000.00
      Kombi 1985 25252.52
      Fim
- Apresentar qual é o carro mais barato hoje, apresentando seu valor depreciado
*/

float calculaDepreciacao(float preco, int ano, int anoHoje) {
	int a;
	for (a = ano; a <= anoHoje; a = a + 1) {
		preco = preco * 0.95;
	}
	return preco;
}

int main(int argc, char *argv[]) {
	int anoHoje;
	char nomeCarro[25], menorCarro[25];
	int anoCarro, menorAno;
	float precoCarro, menorPreco;

	anoHoje = 2019;
	menorPreco = 0;

	printf("Entre com carros (com ano e preco original) ate 'Fim':\n");
	do {
		scanf("%s", nomeCarro);
		if (strcmp(nomeCarro, "Fim") != 0) {
			scanf("%i %f", &anoCarro, &precoCarro);
			precoCarro = calculaDepreciacao(precoCarro, anoCarro, anoHoje);
			if ((precoCarro < menorPreco) || (menorPreco == 0)) {
				strcpy(menorCarro, nomeCarro);
				menorAno = anoCarro;
				menorPreco = precoCarro;
			}
		}
	} while (strcmp(nomeCarro, "Fim") != 0);

	printf("\nO mais barato hoje: %s (%i) por R$ %.2f\n", menorCarro, menorAno, menorPreco);

	return 0;
}
