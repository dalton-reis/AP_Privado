#include <stdio.h>
#include <stdlib.h>

/*
- Criar um programa que leia 3 notas
- Escrever na tela a média aritmética destas notas
*/

int main(int argc, char *argv[]) {
	/* Declaração de variáveis */
	float nota1, nota2, nota3;
	float media;
	
	/* Entrada de valores */
	printf("Entre com 3 notas: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	
	/* Procedimentos */
	media = (nota1 + nota2 + nota3) / 3;
	
	/* Apresentação do resultado */
	printf("A media destas notas vale %.1f\n", media);	
	
	return 0;
}
