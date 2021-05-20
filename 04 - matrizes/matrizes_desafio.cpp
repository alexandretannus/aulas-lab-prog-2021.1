/*
Fazer um algoritmo em C que preencha uma matriz de ordem 11 de números inteiros. 
O algoritmo deverá mostrar em um único arquivo, a matriz preenchida, uma matriz 
contendo somente os números inseridos na DP - Diagonal Principal, uma matriz contendo 
somente os números inseridos na DS - Diagonal Secundária e outra matriz contendo 
somente os números inseridos nas DP e DS. 
Faça o código em C e poste o arquivo .cpp neste espaço. 
*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

const int linha = 11;
const int coluna = 11;

void preencherMatriz(int matriz[][coluna]); //protótipo de função
void mostrarDiagonalPrincipal(int matriz[][coluna]);
void mostrarDiagonalSecundaria(int matriz[][coluna]);
void mostrarDiagonalPrincipalSecundaria(int matriz[][coluna]);
void imprimirMatriz(int matriz[][coluna]);

int main() {
	
	int matriz[linha][coluna];
	
	preencherMatriz(matriz);
	
	imprimirMatriz(matriz);

	mostrarDiagonalPrincipal(matriz);	  
	
	mostrarDiagonalSecundaria(matriz);
	
	mostrarDiagonalPrincipalSecundaria(matriz);
}

void preencherMatriz(int matriz[][coluna]) {
	for (int i=0; i<linha; i++) {
		for (int j=0; j<coluna; j++) {
			matriz[i][j] = rand() % 10;
		}
	}
}

void imprimirMatriz(int matriz[][coluna]) {
	for (int i=0; i<linha; i++) {
		for (int j=0; j<coluna; j++) {
			printf("%2i ", matriz[i][j]);
		}
		printf("\n");
	}	
}

void mostrarDiagonalPrincipal(int matriz[][coluna]) {
	printf("\n\n ---- Diagonal Principal ---- \n\n");
	for (int i=0; i<linha; i++) {
		for (int j=0; j<coluna; j++) {
			if (i == j) {
				printf("%2i ", matriz[i][j]);
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}	
}


void mostrarDiagonalSecundaria(int matriz[][coluna]) {
	printf("\n\n ---- Diagonal Secundaria ---- \n\n");
	for (int i=0; i<linha; i++) {
		for (int j=0; j<coluna; j++) {
			if (i + j == linha - 1) {
				printf("%2i ", matriz[i][j]);
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}	
}

void mostrarDiagonalPrincipalSecundaria(int matriz[][coluna]) {
	printf("\n\n ---- Diagonal Principal e Secundaria ---- \n\n");
	for (int i=0; i<linha; i++) {
		for (int j=0; j<coluna; j++) {
			if (i == j || i + j == linha - 1) {
				printf("%2i ", matriz[i][j]);
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}	
}

