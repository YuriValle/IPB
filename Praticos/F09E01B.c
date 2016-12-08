#include <stdio.h>

int main() {
	int primeiroNumero, segundoNumero;
	printf("Numero maior de dois.\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &primeiroNumero);
	printf("Digite o segundo numero: ");
	scanf("%d", &segundoNumero);
	if(primeiroNumero>segundoNumero){
		printf("%d e maior que %d", primeiroNumero, segundoNumero);
	}else {
		if(primeiroNumero==segundoNumero) {
			printf("Ambos sao iguais e igual a %d", primeiroNumero);
		}else {
			printf("%d e menor que %d", primeiroNumero, segundoNumero);
		}
	}
	
}
