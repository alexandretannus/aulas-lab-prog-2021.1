#include <stdio.h>

int main() {
	
	float notas[5], soma = 0.0;
	
	for (int i=0; i<5; i++) {
		printf("Digite a nota %d: ", i+1);
		scanf("%f", &notas[i]);
		soma += notas[i];
		printf("Soma = %.2f \n", soma);
		// [ 5, 6, 7, 8, 9 ]
		// 5 -> 11 -> 18 -> 26 -> 35
	}
	
	printf("\n\n");
	for (int i=0; i<5; i++) {
		printf("Nota %d: %.2f\n", i+1, notas[i]);	
	}
	
	printf("\n\n");
	printf("Media: %.2f", soma/5);
	
	
	return 0;
}
