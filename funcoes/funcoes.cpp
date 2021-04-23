#include <stdio.h>

// protótipos de funções
void imprimirFuncao1();
void imprimirFuncao2();
void imprimirFuncao3();
int somar(int a, int b);

// variáveis globais
float divisao;
int numero;

int main() {
	
	// imprimirFuncao1();
	
	int a, b;
	a = 5;
	b = 10;
	
	printf("soma = %d\n", somar(a, b)); // 16?	
	printf("a = %d\n", a); // 6 ou 5?
	
	printf("\n\nFIM DA EXECUCAO \n");
}

int somar(int a, int b) {
	a++;	
	return a + b;	
}

void imprimirFuncao1() {
	imprimirFuncao3();
	printf("funcao 1\n");
}

void imprimirFuncao2() {
	printf("funcao 2\n");	
}

void imprimirFuncao3() {
	printf("funcao 3\n");
	imprimirFuncao2();	
}

