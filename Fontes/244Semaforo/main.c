#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* 
- Repetir indefinidamete a impressão das cores de um semáforo
- Fazer uma função para imprimir a cor
*/

void imprime(int estado) {
	if (estado == 0) {
		printf("\tVERMELHO\r");
	}
	else if (estado == 1) {
		printf("\tAMARELO \r");
	}
	else {
		printf("\tVERDE   \r");
	}
}

int main(int argc, char *argv[]) {
	/* Semáforo: 0 - vermelho, 1 - amarelo, 2 - verde */
	int cor;
	
	cor = 0;
	while(0 == 0) {	
		imprime(cor);
		sleep(1);
		cor = (cor + 1) % 3;
	}
		
	return 0;
}
