#include <stdio.h>

int main(){
	int primeiroNumero, segundoNumero;
	printf("Multiplos.\n");
	printf("Digite o primeiro numero.\n");
	scanf("%d", &primeiroNumero);
	printf("Digite o segundo numero.\n");
	scanf("%d", &segundoNumero);
	if (primeiroNumero > segundoNumero){
		printf("%d nao pode ser multiplo de %d.\n", primeiroNumero, segundoNumero);
	} else {
		if ((primeiroNumero/segundoNumero)%2 == 0) {
			printf("%d e multiplo de %d.\n", primeiroNumero, segundoNumero);
		}
	}
}
