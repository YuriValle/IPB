#include <stdio.h>

int main(){
	int numero;
	do{
		printf("Digite um numero maior do que 10: ");
		scanf("%d", &numero);
	} while (numero < 10);
}
