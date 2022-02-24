#include <stdio.h>
#include <stdlib.h>

/* 
- Ler o denominador limite da serie 4/1, -4/3, 4/5, -4/7, 4/9, -4/11 ...
- Apresentar o valor da soma dos elementos desta série: PI
*/

int main(int argc, char *argv[]) {
    int num, cont;
	float soma, quatro;
	
	printf("\nEntre com o valor do limite da serie 4/1, -4/3, 4/5, -4/7, ...: ");
    scanf("%i", &num);
    
	soma = 0;
	quatro = 4;
	for (cont = 1; cont <= num; cont = cont + 2) {
		soma = soma + quatro / cont;
		quatro = -quatro;
	}

	printf("A soma de '4/1 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...' vale %f\n", soma);

	return 0;
}
