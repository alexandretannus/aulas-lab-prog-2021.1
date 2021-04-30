#include <stdio.h>

void imprimirVetor(int vector[], int tamanho) {
	printf("\n\n");
	vector[2] = 70;
	tamanho = 5;
	for (int i=0; i<4; i++) {
		printf("%d\n", vector[i]);
	}
	printf("tamanho funcao: %d\n", tamanho);
}

int main() {
	
	int vetor[4];
	int vetor1[4] = {3, 6, 9, 12};
	int tamanho = 4;
/*	
	for (int i=0; i<4; i++) {
		scanf("%d", &vetor[i]);
	}
*/	
	printf("tamanho main antes: %d\n", tamanho);
	printf("vetor antes: %d\n", vetor1[2]);
	
	imprimirVetor(vetor1, tamanho);
	
	printf("vetor depois: %d\n", vetor1[2]);
	printf("tamanho main: %d", tamanho);
	
	return 0;
}


