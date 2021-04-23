#include <stdio.h>

int main() {
	
	// Atribuição de valores ao vetor
	float notas2[5] = { 4.3, 9.5, 6.8, 8.3, 5.7};
	
	for (int i=0; i<5; i++) {
		printf("Nota %d: %.2f\n", i+1, notas2[i]);	
	}
	
	
	// Atribuição de valores ao vetor	
	notas2[0] = 8.4;	
	notas2[1] = 7.4;	
	// notas2[2] = 6.4;	
	// notas2[3] = 5.4;
	notas2[4] = 3.4;
	
	printf("\n\n");
	for (int i=0; i<5; i++) {
		printf("Nota %d: %.2f\n", i+1, notas2[i]);	
	}
	
	
	
	
	
}
