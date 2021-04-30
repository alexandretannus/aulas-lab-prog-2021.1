#include <stdio.h>


void lerMatriz(int matriz[][4]);
void imprimirMatriz(int matriz[][4]);

int main() {
	int matriz[4][4];
	
	lerMatriz(matriz);
	imprimirMatriz(matriz);
	
}

void lerMatriz(int matriz[][4]) {
	
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++) {
			scanf("%d", &matriz[i][j]);
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
