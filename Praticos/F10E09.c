#include <stdio.h>

int main(){
	int i, numero;
	int soma = 0;
	for(i=0;i<5;i++){
		printf("Digite um numero: ");
		scanf("%d", &numero);
		soma = soma + numero;
	}
	printf("Soma: %d\n", soma);
}
