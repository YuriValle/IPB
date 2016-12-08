#include <stdio.h>

int main() {
	int numero;
	printf("Digite um numero.\n");
	scanf("%d", &numero);
	switch(numero%5){
		case 1: printf("Resto e 1.\n");
				break;
		case 2:
		case 3: printf("Resto e 2 ou 3.\n");
				break;
		case 4: printf("Resto e 4.\n");
				break;
		default: 	printf("Resto nao avaliado.\n");
					break;
	
	}
}
