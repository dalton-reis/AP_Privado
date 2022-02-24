#include <stdio.h>
#include <stdlib.h>

/*
- Ler a data de hoje: d/m/aaaa
- Ler a data de nascimento: d/m/aaaa
- Apresentar na tela o número de dias vividos
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	int diaH, mesH, anoH;
	int diaN, mesN, anoN;
	int diasDeVida, diasAteHoje, diasAteNasc;
	
	/* Entrada de valores */
	printf("Entra com a data de hoje (d/m/aaaa): ");
	scanf("%i/%i/%i", &diaH, &mesH, &anoH);
	printf("Entra com a data de nascimento (d/m/aaaa): ");
	scanf("%i/%i/%i", &diaN, &mesN, &anoN);
	
	/* Procedimentos */
	diasAteHoje = (anoH * 365) + (mesH * 30) + diaH;
	diasAteNasc = (anoN * 365) + (mesN * 30) + diaN;
	diasDeVida = diasAteHoje - diasAteNasc;
	
	/* Apresentação de resultados */
	printf("Ate hoje ja vivi %i dias!\n", diasDeVida);
	
	return 0;
}
