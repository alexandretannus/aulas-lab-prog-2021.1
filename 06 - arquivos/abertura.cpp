/*
	Abertura de Arquivos Somente Leitura
	
	Autor: Alexandre Moraes Tannus
	Data: 27/05/2021	
*/

#include <stdio.h>

int existeArquivo(FILE *file);
FILE* abrirArquivo(char *nome, char *mode);
void fecharArquivo(FILE *file);

int main() {
	FILE *file;
	char *nomeArquivo = "../teste.txt";
	char *modoAbertura = "r";
	
	file = abrirArquivo(nomeArquivo, modoAbertura);
	
	if (existeArquivo(file)) {
		printf("Nao foi possivel abrir o arquivo.\n");
	} else {
		printf("Arquivo aberto com sucesso");
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
