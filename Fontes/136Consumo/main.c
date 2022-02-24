#include <stdio.h>
#include <stdlib.h>

/* 
- Obter o valor do combustível, o valor pago no abastecimento e a quilometragem percorrida
- Apresentar o consumo médio do veículo (km/l)
- Apresentar o custo médio do uso do veículo (R$/km)
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	float valorCombustivel, valorPago, quilometragem;
	float consumo, custo;
	
	/* Entrada de valores */
	printf("Entre com o valor do combustivel: R$ ");
	scanf("%f", &valorCombustivel);
	printf("Entre com o valor pago no abastecimento: R$ ");
	scanf("%f", &valorPago);
	printf("Entre com a quilometragem percorrida: ");
	scanf("%f", &quilometragem);
	
	/* Procedimentos */
	consumo = quilometragem / (valorPago / valorCombustivel);
	custo = valorPago / quilometragem;
	
	/* Apresentação dos resultados */
	printf("\nO consumo medio do veiculo foi de %.1f km/l\n", consumo);
	printf("O custo medio do uso do veiculo foi de R$ %.2f por km\n", custo); 

	return 0;
}
