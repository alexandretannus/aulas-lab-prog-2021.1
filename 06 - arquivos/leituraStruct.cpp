/*
	Leitura de Dados de Arquivo
	
	Autor: Alexandre Moraes Tannus
	Data: 27/05/2021	
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int existeArquivo(FILE *file);
FILE* abrirArquivo(char *nome, char *mode);
void fecharArquivo(FILE *file);
void lerArquivo(FILE *file, char *buffer);
void salvarStruct(FILE *file);

struct disciplina {
	int codigo;	
	char nome[30];
};

int main() {
	FILE *file;
	
	char *nomeArquivo = "struct.txt";
	char *modoAbertura = "r"; //r+ -> cria arquivo caso não exista
	
	struct disciplina disciplina1;	
		
	file = abrirArquivo(nomeArquivo, modoAbertura);
	
	if (existeArquivo(file)) {
		printf("Nao foi possivel abrir o arquivo.\n");
	} else {
		
		while(fread(&disciplina1, sizeof(struct disciplina), 1, file)) {
			printf("Codigo: %d Nome: %s\n", 
					disciplina1.codigo, 
					disciplina1.nome);
		}
		
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
