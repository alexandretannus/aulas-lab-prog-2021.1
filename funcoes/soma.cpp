#include <stdio.h>

int sum(int a, int b);

int main() {
	int soma = sum(3, 2);
	printf("%d\n", soma);
}

int sum(int a, int b) {
	return a + b;
}
