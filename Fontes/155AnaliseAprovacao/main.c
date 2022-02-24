#include <stdio.h>
#include <stdlib.h>

/*
- Ler 3 notas, número de aulas da disciplina e número de aulas assistidas
- Apresentar a média, a frequência e o status de aprovação (média/frequência)
*/

int main(int argc, char *argv[]) {
	float nota1, nota2, nota3;
	int numAulas, numPresencas;
	float media, frequencia;
	
	printf("Entre com as 3 notas: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	printf("Entre com o numero total de aulas do semestre: ");
	scanf("%i", &numAulas);
	printf("Entre com o numero de aulas assistidas: ");
	scanf("%i", &numPresencas);
	
	media = (nota1 + nota2 + nota3) / 3;
	frequencia = 100 * numPresencas / numAulas;

	printf("A media foi %.1f, com frequencia de %.0f%%\n", media, frequencia);
	if ((media >= 6) && (frequencia >= 75)) {
		printf("Esta APROVADO!!!\n");
	}
	else if (media < 6) {
		printf("Esta REPROVADO por nota!\n");
	}
	else {
		printf("Esta REPROVADO por frequencia!\n");
	}

	return 0;
}
