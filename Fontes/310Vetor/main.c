#include <stdio.h>
#include <stdlib.h>

/*
- Ler um vetor de 10 inteiros
- Apresentar o maior, o menor e a soma dos valores do vetor 
*/

int calculaSoma(int valores[10]) {
	int k, result;
	result = 0;
	for (k = 0; k < 10; k = k + 1) {
		result = result + valores[k];
	}
	return result;
}

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	int vetor[10], cont, maior, menor, soma;
	
	/* Entrada de valores */
	printf("Entre com 10 inteiros:\n");
	for (cont = 0; cont < 10; cont = cont + 1) {
		scanf("%i", &vetor[cont]);
	}
	
	/* Procedimentos */
	menor = vetor[0];
	maior = vetor[0];
	for (cont = 1; cont < 10; cont = cont + 1) {
		if (vetor[cont] < menor) {
			menor = vetor[cont];
		}
		if (vetor[cont] > maior) {
			maior = vetor[cont];
		}
	}
	soma = calculaSoma(vetor);
	
	/* Apresentação dos resultados */
	printf("O menor desses valores vale %i\n", menor);
	printf("O maior desses valores vale %i\n", maior);
	printf("A soma desses valores vale %i\n", soma);

	return 0;
}
