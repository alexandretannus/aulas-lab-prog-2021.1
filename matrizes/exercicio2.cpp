#include <stdio.h>
#include <stdlib.h>


void lerMatriz(int matriz[][4]);
void imprimirMatriz(int matriz[][4]);
int obterMaior(int matriz[][4]);
void calcularResultante(int matriz[][4], int fator, int resultante[][4]);

int main() {
	int matriz[4][4], maior, resultante[4][4];
	
	lerMatriz(matriz);
	maior = obterMaior(matriz);
	calcularResultante(matriz, maior, resultante);
	imprimirMatriz(matriz);
	imprimirMatriz(resultante);
	
}

void lerMatriz(int matriz[][4]) {
	
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++) {
			//scanf("%d", &matriz[i][j]);
			matriz[i][j] = rand() % 10;
		}
	}
}

void imprimirMatriz(int matriz[][4]) {	
	printf("\n\n");
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}


int obterMaior(int matriz[][4]) {
	int maior = 0;
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++) {
			if(matriz[i][j] > maior)
				maior = matriz[i][j];
		}
	}
	return maior;
}

void calcularResultante(int matriz[][4], int fator, int resultante[][4]) {
	
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++) {
				resultante[i][j] = fator * matriz[i][j];
		}
	}
}
