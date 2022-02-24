#include <stdio.h>
#include <stdlib.h>

/*
- Ler o valor do salário bruto
- Apresentar o valor do imposto de renda recolhido e o salário líquido
- Cálculo do imposto de renda
	Salário                    Alíquota   Dedução
	Até 1.903,98               -          -
	De 1.903,99 até 2.826,65   7,5        142,80
	De 2.826,66 até 3.751,05   15         354,80
	De 3.751,06 até 4.664,68   22,5       636,13
	Acima de 4.664,68          27,5       869,36
*/

int main(int argc, char *argv[]) {
	float salarioBruto, imposto, salarioLiquido;
	
	printf("Entre com seu salario: R$ ");
	scanf("%f", &salarioBruto);
	
	if (salarioBruto <= 1903.98) {
		imposto = 0;
		salarioLiquido = salarioBruto - imposto;
	} else if (salarioBruto <= 2826.65) {
		imposto = 0.075 * salarioBruto;
		salarioLiquido = salarioBruto - imposto + 142.8;
	} else if (salarioBruto <= 3751.05) {
		imposto = 0.15 * salarioBruto;
		salarioLiquido = salarioBruto - imposto + 354.8;
	} else if (salarioBruto <= 4664.68) {
		imposto = 0.225 * salarioBruto;
		salarioLiquido = salarioBruto - imposto + 636.13;
	} else {
		imposto = 0.275 * salarioBruto;
		salarioLiquido = salarioBruto - imposto + 869.36;
	}
	
	printf("O imposto a ser recolhido vale R$ %.2f\n", imposto);
	printf("O salario liquido a ser recebido vale R$ %.2f\n", salarioLiquido);

	return 0;
}
