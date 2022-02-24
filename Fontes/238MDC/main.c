#include <stdio.h>
#include <stdlib.h>

/*
- Ler 2 números inteiros positivos
- Calcular o Máximo Divisor Comum (MDC) entre eles
*/

int main(int argc, char *argv[]) {
	int val1, val2;
	int cont, mdc;
	
	printf("Entre com 2 inteiros positivos: ");
	scanf("%i %i", &val1, &val2);
	
	if ((val1 <= 0) || (val2 <= 0)) {
		printf("Numeros devem ser positivos!\n");
	}
	else {
		for (cont = 1; cont <= val1; cont = cont + 1) {
			if ((val1 % cont == 0) && (val2 % cont == 0)) {
				mdc = cont;
			}
		}
	
		printf("O MDC entre %i e %i vale %i\n", val1, val2, mdc); 
	}

	return 0;
}
