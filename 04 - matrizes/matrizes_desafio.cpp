/*
Fazer um algoritmo em C que preencha uma matriz de ordem 11 de n�meros inteiros. 
O algoritmo dever� mostrar em um �nico arquivo, a matriz preenchida, uma matriz 
contendo somente os n�meros inseridos na DP - Diagonal Principal, uma matriz contendo 
somente os n�meros inseridos na DS - Diagonal Secund�ria e outra matriz contendo 
somente os n�meros inseridos nas DP e DS. 
Fa�a o c�digo em C e poste o arquivo .cpp neste espa�o. 
*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

const int linha = 11;
const int coluna = 11;

void preencherMatriz(int matriz[][coluna]); //prot�tipo de fun��o
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

