#include <stdio.h>
#include <stdlib.h>
#include <iostream>

const int ordem = 12;

void preencherMatriz(int matriz[][ordem]);
void imprimirMatriz(int matriz[ordem][ordem]);
float calcularOperacao(int matriz[][ordem], int linha, char operacao);


int main() {
	
	int matriz[ordem][ordem], linhaEscolhida;
	float resultado;
	char operacao;
	
	scanf("%i", &linhaEscolhida);
	scanf("%s", &operacao);	
	
	preencherMatriz(matriz);
	resultado = calcularOperacao(matriz, linhaEscolhida, operacao);
	imprimirMatriz(matriz);	
	printf("\n\n");
	printf("Resultado = %.2f\n\n", resultado);
	printf("Operacao = %c", operacao);
	
    
    return 0;
}


float calcularOperacao(int matriz[][ordem], int linha, char operacao) {
	float resultado;
	
	for (int i=0; i<ordem; i++) {
		resultado += matriz[linha-1][i]; 
	}
	
	if (operacao == 'M') {
		resultado = 1.0*resultado/ordem;
	}
	
	operacao = 'K';
	
	return resultado;
	
}

void preencherMatriz(int matriz[][ordem]) {
	for(int linha=0; linha < ordem; linha++) {
		for (int coluna=0; coluna < ordem; coluna++) {
			matriz[linha][coluna] = rand() % 10;
		}	
	}
}


void imprimirMatriz(int matriz[ordem][ordem]) {
	for(int linha=0; linha < ordem; linha++) {
		for (int coluna=0; coluna < ordem; coluna++) {
			printf("%d\t", matriz[linha][coluna]);
		}	
		printf("\n");
	}
}
