#include <stdio.h>
#include <stdlib.h>

/* 
- Ler o valor do limite da serie 2, 5, 8, 11, ...
- Depois ler o valor do denominador limite da serie 1/2, 1/5, 1/8, 1/11, ...
- Apresentar o valor da soma dos elementos desta série
*/

int main(int argc, char *argv[]) {
    int num, cont; 
    float soma;
    
    printf("Entre com o valor do limite da serie 2, 5, 8, ...: ");
    scanf("%i", &num);
    
	soma = 0;
	for (cont = 2; cont <= num; cont = cont + 3) {
		soma = soma + cont;
	}

	printf("A soma de '2 + 5 + 8 + ... + %i' vale %f\n", cont - 3, soma);

    printf("\nEntre com o valor do limite da serie 1/2, 1/5, 1/8, ...: ");
    scanf("%i", &num);
    
	soma = 0;
	for (cont = 2; cont <= num; cont = cont + 3) {
		soma = soma + 1.0 / cont;
	}

	printf("A soma de '1/2 + 1/5 + 1/8 + ... + 1/%i' vale %f\n", cont - 3, soma);

	return 0;
}
