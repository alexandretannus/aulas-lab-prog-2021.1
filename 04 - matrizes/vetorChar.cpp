#include <stdio.h>

int main() {
	
	char nomes[2][15];
	
	for (int i=0; i<2; i++) {
		scanf("%s", &nomes[i]);
	}
	
	printf("%c", nomes[1][4]);
	
	printf("\n\n");
	for (int i=0; i<5; i++) {
		printf("%s\n", nomes[i]);
	}
	
	
	return 0;
}
