#include <stdio.h>

int main(){
	int i;
	int numero;
	printf("Tabuada\n");
	printf("Digite um numero inteiro e saiba a tabuada ate 5.\n");
	scanf("%d", &numero);
	for (i = 1; i <= 5; i = i + 1) {
		printf("%d x %d = %d\n", i, numero, i*numero);
	}
}
