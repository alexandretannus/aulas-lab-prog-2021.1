#include <stdio.h>

void teste(int pval, int *pref);

int main() {
	int x, y, *pont;
	
	//*pont = NULL;
	printf("ponteiro nulo = %d\n\n", pont);
	
	x = 2;
	y = 5;
	pont = &x;
	
	printf("x = %d\n", x);	
	printf("y = %d\n", y);	
	printf("Endereco x = %d\n", &x);	
	printf("Endereco y = %d\n\n", &y);
	
	printf("ponteiro = %d\n", pont);
	printf("endereco ponteiro = %d\n", &pont);
	printf("conteudo ponteiro = %d\n\n", *pont);
	
	teste(x, &y);
	printf("\n --- Após execução da funcao ---\n");
	printf("x = %d\n", x);	
	printf("y = %d\n", y);	
	printf("Endereco x = %d\n", &x);	
	printf("Endereco y = %d\n\n", &y);
}

void teste(int pval, int *pref) {
	pval++;
	(*pref)++;
}
