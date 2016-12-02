#include <stdio.h>

int main (void) {
	int primeiroNumero,segundoNumero;
	printf("Digite dois valores inteiros.\n");
	scanf("%d%d", &primeiroNumero,&segundoNumero);
	printf("A soma de %d e %d e: %d\n",primeiroNumero, segundoNumero, primeiroNumero+segundoNumero);
	printf("O produto de %d e %d e: %d\n",primeiroNumero, segundoNumero, primeiroNumero*segundoNumero);
}
