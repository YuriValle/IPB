#include <stdio.h>

int main() {
	float numero;
	printf("Maior ou menor que 100.\n");
	printf("Digite um numero: ");
	scanf("%f", &numero);
	if(numero>100){
		printf("Numero digitado e >100.\n");
	}else {
		printf("Numero digitado e <=100.\n");
	}	
}
