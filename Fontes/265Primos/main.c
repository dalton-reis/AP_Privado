#include <stdio.h>
#include <stdlib.h>

/*
- Ler um intervalo de valores
- Apresentar a lista dos números deste intervalo que são primos
*/

int verificaSeEhPrimo(int x) {	/* retorna 0->"não é primo" 1->"é primo" */
	int cont;
	
	for (cont = 2; cont <= x - 1; cont = cont + 1) {
		if (x % cont == 0) {
			return 0;
		}
	}
	
	return 1;
}

int main(int argc, char *argv[]) {
	int numero, valorInicial, valorFinal;
	
	printf("Entre com um intervalo de inteiros: ");
	scanf("%i %i", &valorInicial, &valorFinal);
	
	printf("\nOs numeros primos deste intervalo sao:\n");
	for (numero = valorInicial; numero <= valorFinal; numero = numero + 1) {
		if (verificaSeEhPrimo(numero) == 1) {
			printf("\t%i", numero);
		}
	}
	printf("\n");
	
	return 0;
}
