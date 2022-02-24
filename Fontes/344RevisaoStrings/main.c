#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
- Ler 5 nomes com suas respectivas idades
- Apresentar o nome do(a) mais novo(a) e do(a) mais velho(a)
*/

int main(int argc, char *argv[]) {
	char nome[20], menorNome[20], maiorNome[20];
	int idade, menorIdade, maiorIdade, cont;

    printf("Entre com 5 nomes com suas respectivas idades:\n");
    for (cont = 0; cont < 5; cont = cont + 1) {
        scanf("%s %i", nome, &idade);
        if (cont == 0) {
            menorIdade = idade;
            maiorIdade = idade;
            strcpy(menorNome, nome);
            strcpy(maiorNome, nome);
        }
        else {
            if (idade < menorIdade) {
                menorIdade = idade;
                strcpy(menorNome, nome);
            }
            if (idade > maiorIdade) {
                maiorIdade = idade;
                strcpy(maiorNome, nome);
            }
        }
    }

   	printf("\nO(A) mais novo(a) eh %s com %i anos!\n", menorNome, menorIdade);
	printf("O(A) mais experiente eh %s com %i anos!\n", maiorNome, maiorIdade);
    
	return 0;
}
