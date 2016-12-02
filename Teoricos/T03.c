#include <stdio.h>


int main () {
	int valor;
	int i;
	do {
		printf("Introduza um valor entre 1 e 10.\n");
		scanf("%d", &valor);
	} while (valor < 1 || valor > 10);
	printf("Apresentando a tabuada de %d", valor);
	for (i = 0; i <= 10; i=i+1) {
		printf("%d x %d = %d\n", valor, i, i*valor);	
	}
	
}
