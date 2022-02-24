#include <stdio.h>
#include <stdlib.h>

/*
- Ler um usu�rio/senha num�ricos
- Indicar o tipo de acesso liberado:
    -> usu�rio 1, senha 123456: acesso de administrador 
    -> usu�rio 2 ou 3, senha 81818: acesso de funcion�rio 
    -> usu�rio 4 at� 9, senha 2222: acesso de cliente 
*/

int main(int argc, char *argv[]) {
	int usr, pwd;
	
	printf("Entre com seu usuario e senha numericos: ");
	scanf("%i %i", &usr, &pwd);
	
	if ((usr == 1) && (pwd == 123456)) {
		printf("Acesso liberado para administrador\n");
	}
	else if (((usr == 2) || (usr == 3)) && (pwd == 81818)) {
		printf("Acesso liberado para funcionario\n");
	}
	else if (((usr >= 4) && (usr <= 9)) && (pwd == 2222)) {
		printf("Acesso liberado para cliente\n");
	}
	else {
		printf("Acesso bloqueado: usuario ou senha invalido\n");
	}
	
	return 0;
}
