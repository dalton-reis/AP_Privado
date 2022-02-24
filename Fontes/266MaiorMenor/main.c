#include <stdio.h>
#include <stdlib.h>

/* 
- Ler uma série de números inteiros positivos até ler 0
- Apresentar o maior e o menor desses números
- Indicar que se o número for negativo ele não será computado
*/

int main(int argc, char *argv[]) {
    int numero, maior, menor;
    
    printf("Entre com numeros inteiros positivos ('0' para terminar):\n");
    scanf("%i", &numero);
    menor = numero;
    maior = numero;
    
    while (numero != 0) {
        if (numero < 0) {
            printf("Numero negativo nao eh valido!\n");
        }
        else if (numero > 0) {
        	if (numero < menor) {
        		menor = numero;
        	}
        	if (numero > maior) {
        		maior = numero;
        	}
    	}
    	scanf("%i", &numero);
    };

    printf("O menor desses numeros vale %i\n", menor);
    printf("O maior desses numeros vale %i\n", maior);

	return 0;
}
