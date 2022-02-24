#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
- Ler o nome de um dia da semana e um intervalo de dias
- Apresentar o nome do novo dia da semana
*/

int calculaDiaSemana(char dia[20])
{
	int indice;
	
	if (dia[0] == 't') {
		indice = 2;
	}
	else if (dia[0] == 'q') {
		if (dia[2] == 'a') {
			indice = 3;
		}
		else {
			indice = 4;
		}
	}
	else if (dia[0] == 's') {
		if (dia[2] == 'g') {
			indice = 1;
		}
		else if (dia[2] == 'x') {
			indice = 5;
		}
		else {
			indice = 6;
		}
	}
	else {
		indice = 0;
	}
	
	return indice;
}

int main(int argc, char *argv[]) {
	int intervalo;
	char diaSemana[20], dias[7][20];
	int indiceHoje, indiceFinal;
	
	strcpy(dias[0], "domingo");
	strcpy(dias[1], "segunda-feira");
	strcpy(dias[2], "terca-feira");
	strcpy(dias[3], "quarta-feira");
	strcpy(dias[4], "quinta-feira");
	strcpy(dias[5], "sexta-feira");
	strcpy(dias[6], "sabado");
	
	printf("Entre com o dia da semana: ");
	scanf("%s", diaSemana);
	printf("Entre com um intervalo de dias: ");
	scanf("%i", &intervalo);
	
	indiceHoje = calculaDiaSemana(diaSemana);
	indiceFinal = (indiceHoje + intervalo) % 7;

	printf("Em %i dias sera %s\n", intervalo, dias[indiceFinal]);
		
	return 0;
}
