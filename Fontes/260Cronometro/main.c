#include <stdio.h>
#include <stdlib.h>

/* 
- Fazer um cronômetro chamando uma função que escreva a hora (h:mm:ss)
*/

void escreverCronometro(int h, int m, float s) {
	printf("\t%i:%02i:%04.1f\r", h, m, s);
}

int main(int argc, char *argv[]) {
	int minuto, hora;
	float segundo;
	
	segundo = 0;
	minuto = 0;
	hora = 0;
	
	while (!kbhit()) {
		escreverCronometro(hora, minuto, segundo);
		Sleep(100);
		segundo = segundo + 0.1;
		if (segundo >= 60) {
			segundo = 0;
			minuto = minuto + 1;
			if (minuto == 60) {
				minuto = 0;
				hora = hora + 1;
			}
		}
	}
	getch();

	return 0;
}
