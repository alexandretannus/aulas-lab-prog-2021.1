#include <stdio.h>

void imprimirVetor(int vetor[], int tamanho);

int main() {
	
	int vetor[8] = {4, 8, 6, 7, 9};
	
	int tamanhoVetor = sizeof(vetor);
	int tamanhoInt = sizeof(int);
	int tamanho = tamanhoVetor/tamanhoInt;
		
	imprimirVetor(vetor, tamanho);
	
	imprimirVetor(vetor, tamanho);
	
	imprimirVetor(vetor, tamanho);
	return 0;
}

void imprimirVetor(int vetor[], int tamanho) {
	for (int i=0; i<tamanho; i++) {
		printf("Valor: %d\n ", vetor[i]);
	}
}
