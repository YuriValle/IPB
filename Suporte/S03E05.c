#include <stdio.h>

int main() {
	int inicio;
	int fim;
	int i;
	printf("Saiba todos os numeros inteiros dentro de um intervalo.\n");
	printf("Em que numero devo comecar a contagem?\n");
	scanf("%d", &inicio);
	printf("Em que numero devo terminar a contagem?\n");
	scanf("%d", &fim);
	for(i = inicio; i <= fim; i = i + 1) {
		printf("%d\n", i);
	}	
}
