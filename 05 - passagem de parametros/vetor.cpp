#include <stdio.h>
#include <stdlib.h>

int somarVetor(int vetor[]);
void preencherVetor(int *vetor);
void imprimirVetor(int *vetor);

int main() {
	
	int vetor[5], resultado;

	preencherVetor(vetor);
	imprimirVetor(vetor);
	
	resultado = somarVetor(vetor);
	printf("\n\nResultado: %d\n", resultado);
	
	imprimirVetor(vetor);

    return 0;
}

void preencherVetor(int *vetor) {		
	for(int i=0; i<5; i++) {
		scanf("%d", &vetor[i]);
	}
}

int somarVetor(int vetor[]) {
	int soma;
	
	vetor[3] = 20;
	
	for(int i=0; i<5; i++) {
		soma = soma + vetor[i];
	}
	
	return soma;
}


void imprimirVetor(int *vetor) {
	for(int i=0; i<5; i++) {
		printf("%d\t", vetor[i]);
	}
}
