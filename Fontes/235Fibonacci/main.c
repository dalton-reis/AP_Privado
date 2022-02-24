#include <stdio.h>
#include <stdlib.h>

/*
- Ler o número de termos a ser calculado da série de Fibonacci a partir de 1
- Apresentar a série de Fibonacci (cada termo é a soma dos 2 anteriores)
*/

int main(int argc, char *argv[]) {
	int numero, cont;
	int penultima, ultima, atual;
		
    printf("Entre com o numero de termos a ser calculado da serie de Fibonacci: ");
    scanf("%i", &numero);
    
    printf("1, 1");
    ultima = 1;
    atual = 1;
    for (cont = 3; cont <= numero; cont = cont + 1) {
    	penultima = ultima;
    	ultima = atual;
    	atual = penultima + ultima;
    	printf(", %i", atual);
    }
	printf("\n");
	
	return 0;
}
