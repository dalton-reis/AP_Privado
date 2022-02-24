#include <stdio.h>
#include <stdlib.h>

/*
- Ler uma lista de [idade, sexo (M/F), salário] (até ler idade 0)
- Apresentar a maior e a menor idade  
- Apresentar a média dos salários  
- Apresentar o percentual de mulheres
- Apresentar o percentual de homens
*/

int main(int argc, char *argv[]) {
    int idade, maiorIdade, menorIdade, contador, contM, contF;
    char sexo;
    float salario, somaSalarios;

    printf("Analise sobre uma lista de dados de uma populacao\n");
    printf("Entre com idade, sexo (M/F) e salario (idade '0' para terminar):\n");
    menorIdade = 150;
    maiorIdade = 0;
    somaSalarios = 0;
    contador = 0;
    contM = 0;
    contF = 0;
    do {
    	scanf("%i", &idade);
    	if (idade > 0) {
    		scanf(" %c %f", &sexo, &salario);
    		if (idade < menorIdade) {
    			menorIdade = idade;
    		}
    		if (idade > maiorIdade) {
    			maiorIdade = idade;
    		}
    		somaSalarios = somaSalarios + salario;
    		contador = contador + 1;
    		if ((sexo == 'M') || (sexo == 'm')) {
    			contM = contM + 1;
    		}
    		else if ((sexo == 'F') || (sexo == 'f')) {
    			contF = contF + 1;
    		}
    	} 
    	
    } while (idade > 0);

    printf("\nA menor idade eh %i anos e a maior idade eh %i anos\n", menorIdade, maiorIdade);
    printf("A media dos salarios vale R$ %.2f\n", somaSalarios / contador);
    printf("%i%% sao mulheres\n", 100 * contF / contador);
    printf("%i%% sao homens\n", 100 * contM / contador);

	return 0;
}
