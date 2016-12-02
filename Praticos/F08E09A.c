#include <stdio.h>

int main (void) {
	int primeiroNumero,segundoNumero;
	printf("Digite dois valores inteiros.\n");
	printf("Digite o primeiro valor: ");
	scanf("%d", &primeiroNumero);
	printf("Digite o segundo valor: ");
	scanf("%d", &segundoNumero);
	printf("A soma de %d e %d e: %d\n",primeiroNumero, segundoNumero, primeiroNumero+segundoNumero);
	printf("O produto de %d e %d e: %d\n",primeiroNumero, segundoNumero, primeiroNumero*segundoNumero);
}
