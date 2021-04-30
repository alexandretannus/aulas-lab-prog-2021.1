#include <stdio.h>

void imprimirMatriz(int matriz[][3]);

int main() {
	
	int vetor[5];
	int matriz[2][3] = {6, 9, 3, 1, 7, 5};
	int matriz1[2][3] = {
							{6, 9, 3},
							{1, 7, 5}
						};

	printf("%d\n\n", matriz[1][2]);
	printf("%d\n\n", matriz[1][0]);

	imprimirMatriz(matriz);
	printf("\n\n");
	imprimirMatriz(matriz1);
	
	matriz[1][2] = 90;
	imprimirMatriz(matriz);
	
	
	return 0;
}

void imprimirMatriz(int matriz[][3]) {		
	for (int i=0; i<2; i++) {
		for (int j=0; j<3; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
