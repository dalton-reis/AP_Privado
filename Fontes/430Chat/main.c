#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h> 

// SOCKET inicializaSocket(int porta, int ip[4])
//		Entrada:	porta: porta local do socket a ser criado
//					       Usar 22020 se for emissor, 22022 se for receptor
//		Saida:		ip[4]: 4 inteiros com o IP da maquina local
//		Retorno:	SOCKET: é o Socket Handle criado
//							INVALID_SOCKET significa que houve algum erro
//
// int leMsg(SOCKET sd, char buff[256], int ip[4])
//		Entrada:	SOCKET: é o Socket Handle
//		Saida:		buff: onde sera armazenado o string lido do socket
//					ip[4]: 4 inteiros com o IP da maquina que mandou a string
//		Retorno:	int: número de bytes lidos em buff
//
// void enviaMsg(SOCKET sd, char buff[256], int ip[4])
//		Entrada:	SOCKET: é o Socket Handle
//					buf: contém o string a ser enviado
//					ip[4]: 4 inteiros com o IP da máquina para onde enviar a string
//
// void finalizaSocket(SOCKET sd)
//		Entrada:	SOCKET: é o Socket Handle
//
// Obs: deve-se incluir a Lib do winsock "wsock32.lib":
//      adicione nas opções do LINKER "-l wsock32" em Projeto->Opções do Projeto, 
//		aba Parâmetros. campo Linker

SOCKET inicializaSocket(int porta, int ip[4]) {
	WSADATA wsa = {0};
	struct sockaddr_in addr;
	char flag = -1;
	char buff[128];
	struct hostent *host;
	SOCKET sd;

	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
    	printf("Biblioteca de socket nao esta disponivel\n");
    	return INVALID_SOCKET;
	}

	sd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if (sd == INVALID_SOCKET) {
		printf("Erro na criaco do socket: %s\n", WSAGetLastError());
    	return INVALID_SOCKET;
	}
	if (gethostname(buff, 128) == SOCKET_ERROR) {
		printf("Erro no nome da máquina: %s\n", WSAGetLastError());
    	return INVALID_SOCKET;
	}
	host = gethostbyname(buff);
	if (host->h_addr_list[0]) {
		ip[0] = (unsigned char) host->h_addr_list[0][0];
		ip[1] = (unsigned char) host->h_addr_list[0][1];
		ip[2] = (unsigned char) host->h_addr_list[0][2];
		ip[3] = (unsigned char) host->h_addr_list[0][3];
		printf("Maquina local: %s", buff);
		printf(" (%i.%i.%i.%i)\n", ip[0], ip[1], ip[2], ip[3]);
	}
	else {
		printf("Erro nas interfaces da máquina: %s\n", WSAGetLastError());
    	return INVALID_SOCKET;
	}
	addr.sin_family = AF_INET;
	memset(addr.sin_zero, 0, 8);
	addr.sin_port = porta;
	addr.sin_addr.S_un.S_un_b.s_b1 = ip[0];
	addr.sin_addr.S_un.S_un_b.s_b2 = ip[1];
	addr.sin_addr.S_un.S_un_b.s_b3 = ip[2];
	addr.sin_addr.S_un.S_un_b.s_b4 = ip[3];
	if (bind(sd, (struct sockaddr *) &addr, sizeof(addr)) == SOCKET_ERROR) {
		printf("Erro no link do socket: %s\n", WSAGetLastError());
    	return INVALID_SOCKET;
	}
	printf("Socket criado com sucesso!\n");

	return sd;
}

int leMsg(SOCKET sd, char buff[256], int ip[4]) {
	struct sockaddr_in de;
	int deLen, buffLen;

	deLen = sizeof(de);
	buffLen = recvfrom(sd, buff, 256, 0, (struct sockaddr *) &de, &deLen);
	ip[0] = de.sin_addr.S_un.S_un_b.s_b1;
	ip[1] = de.sin_addr.S_un.S_un_b.s_b2;
	ip[2] = de.sin_addr.S_un.S_un_b.s_b3;
	ip[3] = de.sin_addr.S_un.S_un_b.s_b4;

	return buffLen;
}

void enviaMsg(SOCKET sd, char buff[256], int ip[4]) {
	struct sockaddr_in para;

	para.sin_family = AF_INET;
	memset(para.sin_zero, 0, 8);
	para.sin_port = 22022;
	para.sin_addr.S_un.S_un_b.s_b1 = ip[0];
	para.sin_addr.S_un.S_un_b.s_b2 = ip[1];
	para.sin_addr.S_un.S_un_b.s_b3 = ip[2];
	para.sin_addr.S_un.S_un_b.s_b4 = ip[3];
	sendto(sd, buff, (int) strlen(buff) + 1, 0, (struct sockaddr *) &para, sizeof(para));
}

void finalizaSocket(SOCKET sd) {
	closesocket(sd);
	WSACleanup();
}

// Inicio do codigo
// Emissor do Chat
void emissor(void) {
	char op;
	SOCKET sd;
	char nome[40];
	char outBuff[256];
	char buff[256];
	int ip[4], ipBroad[4];

	printf("Entre com seu nome: ");
	scanf("%s", nome);
	strcat(nome, ": ");
	sd = inicializaSocket(22020, ip);
	ipBroad[3] = 255;
	if (ip[0] < 192) {
		ipBroad[2] = 255;
	}
	else {
		ipBroad[2] = ip[2];
	}
	if (ip[0] < 128) {
		ipBroad[1] = 255;
	}
	else {
		ipBroad[1] = ip[1];
	}
	ipBroad[0] = ip[0];
	if (sd != INVALID_SOCKET) {
		scanf("%c", &op);	// remove ENTER do buffer
		do {
			printf("\n(M)ensagem\n(E)ndereco IP\n(B)roadcast\n(S)air\n ");
			scanf("%c", &op);
			if ((op == 'm') || (op == 'M')) {
				scanf("%c", &op);	// remove ENTER do buffer
				printf("Mensagem para %i %i %i %i:\n", ip[0], ip[1], ip[2], ip[3]);
				gets(outBuff);
				enviaMsg(sd, outBuff, ip);
			}
			else if ((op == 'e') || (op == 'E')) {
				printf("Endereco de destino atual: %i %i %i %i\n", ip[0], ip[1], ip[2], ip[3]);
				printf("Novo endereco de destino:  ");
				scanf("%i%i%i%i", &ip[0], &ip[1], &ip[2], &ip[3]);
				scanf("%c", &op);	// remove ENTER do buffer
			}
			else if ((op == 'b') || (op == 'B')) {
				printf("Endereco de destino atual: %i %i %i %i\n", ip[0], ip[1], ip[2], ip[3]);
				ip[0] = ipBroad[0];
				ip[1] = ipBroad[1];
				ip[2] = ipBroad[2];
				ip[3] = ipBroad[3];
				printf("Novo endereco de destino:  %i %i %i %i\n", ip[0], ip[1], ip[2], ip[3]);
				scanf("%c", &op);	// remove ENTER do buffer
			}
		} while ((op != 's') && (op != 'S'));

	finalizaSocket(sd);
	}
}

// Teste Emissor do Chat
void testeEmissor(void) {
	SOCKET sd;
	char buff[40];
	int ip[4];

	strcpy(buff, "Mensagem de teste!");
	sd = inicializaSocket(22020, ip);
	if (sd != INVALID_SOCKET) {
		ip[3] = 255;
		if (ip[0] < 192) {
			ip[2] = 255;
		}
		if (ip[0] < 128) {
			ip[1] = 255;
		}
		while (sd != INVALID_SOCKET) {
			enviaMsg(sd, buff, ip);
			sleep(2000);
		}
		
		finalizaSocket(sd);
	}
}

// Receptor do Chat
void receptor(void) {
	SOCKET sd;
	int ip[4];
	char buff[256];

	sd = inicializaSocket(22022, ip);
	if (sd != INVALID_SOCKET) {
		while (sd != INVALID_SOCKET) {
			if (leMsg(sd, buff, ip) > 0) {
				printf("De %i.%i.%i.%i: ", ip[0], ip[1], ip[2], ip[3]);
				printf("%s\n", buff);
			}
		}
	}
	finalizaSocket(sd);
}

int main(int argc, char *argv[]) {
	char op;

	printf("\tC  H  A  T\n\n");
	printf("Programa (E)missor, (R)eceptor ou (T)este de mensagens? ");
	scanf("%c", &op);
	if ((op == 'e') || (op == 'E')) {
		emissor();
	}
	else if ((op == 'r') || (op == 'R')) {
		receptor();
	}
	else if ((op == 't') || (op == 'T')) {
		testeEmissor();
	}
  
	return 0;
}
