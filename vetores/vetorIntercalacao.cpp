#include <stdio.h>

int main() {
	
	int vetor1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 , 10 };
	int vetor2[10] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};
	int vetorResultante[20];
	
	for (int i=0; i<20; i++) {
		if (i % 2 == 0) {
			vetorResultante[i] = vetor1[i/2];
		} else {
			vetorResultante[i] = vetor2[i/2];
		}
	}
	
	
	for (int j=0; j<20; j++) {
		printf("Indice: %d \t Valor: %d\n", j, vetorResultante[j]);	
	}
	
	return 0;
}
