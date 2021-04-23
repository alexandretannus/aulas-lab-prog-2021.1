#include <stdio.h>

int verificarPrimo(int i);

int main() {
	
	int vetor[9] = {5, 12, 8, 23, 987, 321, 121, 454, 7};
	
	for (int i=0; i<9; i++) {
		if (verificarPrimo(vetor[i]) == 1) {
			printf("Indice: %d \t Valor: %d\n", i, vetor[i]);
		}
	}
	
}

int verificarPrimo(int num) {
	if (num < 2) {
		return 0;
	}
	
	if (num == 2) {
		return 1;
	}
	
	for (int i=2; i < num; i++ ) {
		if (num % i == 0) {
			printf("%d e Divisivel por %d\n", num, i);
			return 0;
		} 
	}
	
	return 1;
}
