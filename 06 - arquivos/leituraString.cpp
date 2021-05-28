/*
	Leitura de Dados de Arquivo
	
	Autor: Alexandre Moraes Tannus
	Data: 27/05/2021	
*/

#include <stdio.h>

int existeArquivo(FILE *file);
FILE* abrirArquivo(char *nome, char *mode);
void fecharArquivo(FILE *file);
void lerArquivo(FILE *file, char *buffer);

int main() {
	FILE *file;
	int numero;
	char *nomeArquivo = "lorem.txt";
	char *modoAbertura = "r"; //r+ -> cria arquivo caso não exista
	char buffer[80];
		
	file = abrirArquivo(nomeArquivo, modoAbertura);
	
	if (existeArquivo(file)) {
		printf("Nao foi possivel abrir o arquivo.\n");
	} else {
		lerArquivo(file, buffer);
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

void lerArquivo(FILE *file, char *buffer) {
	fgets(buffer, 80, file);
	
	while (!feof(file)) {
		printf("%s\n\n", buffer);
		fgets(buffer, 80, file);
	}
}
