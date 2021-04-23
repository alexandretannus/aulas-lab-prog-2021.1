#include <iostream>

int main() {
	// float nota1, nota2, nota3, nota4, nota5;
	float nota[76];
	
	nota[0] = 8.4;
	nota[1] = 5.9;
	// ...
	nota[49] = 7.3;
	// ...
	nota[75] = 9.4;
	
	// Tentativa de acessar posição não existente do vetor
	// nota[78] = 8.9;
	
	printf("%.2f\n", nota[75]);
	
}
