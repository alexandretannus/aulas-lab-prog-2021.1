#include <stdio.h>

int somarDoisNumeros(int op1, int op2);
void imprimirResultado(int a, int b, int resultado);

int main() {
	
	int a, b, soma;
	
	printf("Digite um número: ");
	scanf("%d", &a);
	printf("Digite um número: ");
	scanf("%d", &b);
    
    soma = somarDoisNumeros(a, b);
    
    imprimirResultado(a, b, soma);
    
    return 0;
}

int somarDoisNumeros(int op1, int op2) {
	int c;
	
	// op1 = 10
	
	c = op1 + op2;
	
	return c;
}


void imprimirResultado(int a, int b, int resultado){
	printf("%d + %d = %d", a, b, resultado);
}
