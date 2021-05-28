/*
	Abertura de Arquivos Para Gravação
	
	Autor: Alexandre Moraes Tannus
	Data: 27/05/2021	
*/

#include <stdio.h>

int existeArquivo(FILE *file);
FILE* abrirArquivo(char *nome, char *mode);
void fecharArquivo(FILE *file);
void gravarArquivo(FILE *file, char *mensagem);
void gravarArquivo(FILE *file, int numero);

int main() {
	FILE *file;
	int numero;
	char *nomeArquivo = "teste2.txt";
	char *modoAbertura = "w"; //w+ -> cria arquivo caso não exista
	char mensagem[80];
	
	printf("Digite a mensagem: ");	
	gets(mensagem);	
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	file = abrirArquivo(nomeArquivo, modoAbertura);
	
	if (existeArquivo(file)) {
		printf("Nao foi possivel abrir o arquivo.\n");
	} else {
		printf("Arquivo aberto com sucesso\n");
		gravarArquivo(file, mensagem);
		gravarArquivo(file, numero);
		
		fecharArquivo(file);
	}
	
	return 0;
}

int existeArquivo(FILE *file) {
	return file == NULL;
}

FILE* abrirArquivo(char *nome, char *mode) {
	return fopen(nome, mode);
}

void fecharArquivo(FILE *file) {
	fclose(file);
}

void gravarArquivo(FILE *file, char *mensagem) {
	fprintf(file, "%s\n", mensagem);
}

void gravarArquivo(FILE *file, int numero) {
	fprintf(file, "Número: %d", numero);
}
