#include <stdio.h>

int main (void) {
	int primeiroNumero;
	int segundoNumero;
	
	printf("Saiba o maior valor inserido.\n");
	printf("Digite o primeiro numero:\n");
	scanf("%d", &primeiroNumero);
	printf("Digite o segundo numero:\n");
	scanf("%d", &segundoNumero);
	if(primeiroNumero == segundoNumero){
		printf("Os numeros sao iguais.\n");
	} else {
		if(primeiroNumero > segundoNumero){
			printf("O primeiro numero e maior.\n");
		} else{
			printf("O segundo numero e maior.\n");
		}
		printf("%d", primeiroNumero);
	}
}
