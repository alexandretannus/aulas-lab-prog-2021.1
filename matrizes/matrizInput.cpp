#include <stdio.h>

void imprimirMatriz(int *matriz);

int main() {
	int matriz[2][2];
	
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
	
	imprimirMatriz(&matriz[0][0]);
		
	return 0;
}


void imprimirMatriz(int *matriz) {	
	printf("\n\n");
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
