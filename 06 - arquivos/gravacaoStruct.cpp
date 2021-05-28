/*
	Gravação de struct em arquivo
	
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
void gravarStructEmArquivo(FILE *file, struct disciplina dado);

struct disciplina {
	int codigo;	
	char nome[30];
} ;

int main() {
	FILE *file;
	
	char *nomeArquivo = "struct.txt";
	char *modoAbertura = "w+"; //r+ -> cria arquivo caso não exista
	char buffer[80];
	
	struct disciplina disciplina1 = {
		97,
		"Laboratorio de Programacao"
	};
	
		
	file = abrirArquivo(nomeArquivo, modoAbertura);
	
	if (existeArquivo(file)) {
		printf("Nao foi possivel abrir o arquivo.\n");
	} else {
		gravarStructEmArquivo(file, disciplina1);
				
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

void gravarStructEmArquivo(FILE *file, struct disciplina dado) {
	fwrite(&dado, sizeof(struct disciplina), 1, file);
		if (fwrite != 0) {
			printf("Arquivo gravado com sucesso\n");
		}	
}

void lerArquivo(FILE *file, char *buffer) {
	fgets(buffer, 80, file);
	
	while (!feof(file)) {
		printf("%s\n\n", buffer);
		fgets(buffer, 80, file);
	}
}
