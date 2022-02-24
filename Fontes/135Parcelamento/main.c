#include <stdio.h>
#include <stdlib.h>

/*
- Obter o valor de um produto
- Apresentar as opções de parcelamento:
  -> valor a vista com 10% de desconto
  -> valor de 3 parcelas
  -> valor de 6 parcelas com acréscimo de 15%
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	float valor, parcAVista, parc3Vezes, parc6Vezes;
	
	/* Entrada de valores */
	printf("Entre com o valor do produto: R$ ");
	scanf("%f", &valor);
	
	/* Procedimentos */
	parcAVista = (valor - 0.1*valor);
	parc3Vezes = valor / 3;
	parc6Vezes = (valor + 0.15*valor) / 6;
	
	/* Apresentação de resultados */
	printf("Opcoes de pagamento:\n");
	printf("\t- a vista (10%% de desconto): 1 parcela de R$ %.2f\n", parcAVista);
	printf("\t- em 3 vezes: 3 parcelas de R$ %.2f\n", parc3Vezes);
	printf("\t- em 6 vezes (15%% de acrescimo): 6 parcelas de R$ %.2f\n", parc6Vezes);
	
	return 0;
}
