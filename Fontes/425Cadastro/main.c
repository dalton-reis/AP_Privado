#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
- Ler uma lista de pessoas: nome, idade, salario
- Armazenar esta lista em um arquivo de cadastro
- Apresentar quem possui o maior salãrio deste arquivo de cadastro
*/

struct cad {
	char nome[30];
	int idade;
	float salario;
};

void ArmazenarDados(struct cad l[100], int n) {
	FILE *fh;
	int i;
	
	fh = fopen("cad.txt", "a");
	for (i = 0; i < n; i = i + 1) {
		fprintf(fh, "%s %i %f\n", l[i].nome, l[i].idade, l[i].salario);
	}
	fclose(fh);
}

void MaiorSalario(void) {
	FILE *fh;
	struct cad maior;
	struct cad atual;

	strcpy(maior.nome, "");
	maior.idade = 0;
	maior.salario = 0;
	fh = fopen("cad.txt", "r");
	while (!feof(fh)) {
		if (fscanf(fh, "%s", atual.nome) > 0) {
			fscanf(fh, "%i %f", &atual.idade, &atual.salario);
			if (atual.salario > maior.salario) {
				strcpy(maior.nome, atual.nome);
				maior.idade = atual.idade;
				maior.salario = atual.salario;
			}
		}
	}
	fclose(fh);

	printf("\n%s tem o maior salario: R$ %.2f\n", maior.nome, maior.salario);
}

int main(int argc, char *argv[]) {
	int num;
	struct cad lista[100];

	num = 0;
	printf("Entre com os dados (nome, idade, salario)");
	printf(" ('Fim' para terminar):\n");
	do {
		scanf("%s", lista[num].nome);
		if (strcmp(lista[num].nome, "Fim") != 0) {
			scanf("%i %f", &lista[num].idade, &lista[num].salario);
			num = num + 1;
		}
	} while (strcmp(lista[num].nome, "Fim") != 0);

	ArmazenarDados(lista, num);
	MaiorSalario();

	return 0;
}
