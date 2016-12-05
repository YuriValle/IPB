#include <stdio.h>
int escolheTabuada();
void apresentaTabuada(int);

int main () {
	int valor;
	valor = escolheTabuada();
	apresentaTabuada(valor);	
}

int escolheTabuada() {
	int valor;
	do {
		printf("Introduza um valor entre 1 e 10.\n");
		scanf("%d", &valor);
	} while (valor < 1 || valor > 10);
	return valor;
}

void apresentaTabuada(valor) {
	int i;
	printf("Apresentando a tabuada de %d", valor);
	for (i = 0; i <= 10; i=i+1) {
		printf("%d x %d = %d\n", valor, i, i*valor);	
	}
}
